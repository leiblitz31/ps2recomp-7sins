#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00280090
// Address: 0x280090 - 0x2804a0
void sub_00280090_0x280090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280090_0x280090");
#endif

    switch (ctx->pc) {
        case 0x280128u: goto label_280128;
        case 0x280138u: goto label_280138;
        case 0x280148u: goto label_280148;
        case 0x280158u: goto label_280158;
        case 0x280164u: goto label_280164;
        case 0x280170u: goto label_280170;
        case 0x280188u: goto label_280188;
        case 0x28019cu: goto label_28019c;
        case 0x2801b0u: goto label_2801b0;
        case 0x2801c0u: goto label_2801c0;
        case 0x2801c8u: goto label_2801c8;
        case 0x2801d4u: goto label_2801d4;
        case 0x2801ecu: goto label_2801ec;
        case 0x280204u: goto label_280204;
        case 0x280210u: goto label_280210;
        case 0x280220u: goto label_280220;
        case 0x280230u: goto label_280230;
        case 0x280244u: goto label_280244;
        case 0x280258u: goto label_280258;
        case 0x280260u: goto label_280260;
        case 0x28026cu: goto label_28026c;
        case 0x280284u: goto label_280284;
        case 0x280294u: goto label_280294;
        case 0x2802a4u: goto label_2802a4;
        case 0x2802d0u: goto label_2802d0;
        case 0x2802ecu: goto label_2802ec;
        case 0x280300u: goto label_280300;
        case 0x28031cu: goto label_28031c;
        case 0x280348u: goto label_280348;
        case 0x28036cu: goto label_28036c;
        case 0x280388u: goto label_280388;
        case 0x2803a4u: goto label_2803a4;
        case 0x2803b4u: goto label_2803b4;
        case 0x2803c0u: goto label_2803c0;
        case 0x2803ccu: goto label_2803cc;
        case 0x2803e0u: goto label_2803e0;
        case 0x2803f0u: goto label_2803f0;
        case 0x280408u: goto label_280408;
        case 0x280420u: goto label_280420;
        case 0x280430u: goto label_280430;
        case 0x280440u: goto label_280440;
        case 0x280458u: goto label_280458;
        case 0x280468u: goto label_280468;
        default: break;
    }

    ctx->pc = 0x280090u;

    // 0x280090: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x280090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x280094: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x280094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x280098: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x280098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28009c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28009cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2800a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2800a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2800a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2800a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2800a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2800a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2800ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2800acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2800b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2800b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2800b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2800b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2800b8: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x2800b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x2800bc: 0xa3a50100  sb          $a1, 0x100($sp)
    ctx->pc = 0x2800bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 5));
    // 0x2800c0: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2800c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2800c4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2800c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2800c8: 0xc780bc18  lwc1        $f0, -0x43E8($gp)
    ctx->pc = 0x2800c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2800cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2800ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2800d0: 0xe780bc18  swc1        $f0, -0x43E8($gp)
    ctx->pc = 0x2800d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949912), bits); }
    // 0x2800d4: 0xc781bc18  lwc1        $f1, -0x43E8($gp)
    ctx->pc = 0x2800d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2800d8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2800d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2800dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2800dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2800e0: 0x0  nop
    ctx->pc = 0x2800e0u;
    // NOP
    // 0x2800e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2800e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2800e8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2800E8u;
    {
        const bool branch_taken_0x2800e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2800e8) {
            ctx->pc = 0x2800FCu;
            goto label_2800fc;
        }
    }
    ctx->pc = 0x2800F0u;
    // 0x2800f0: 0x93a30100  lbu         $v1, 0x100($sp)
    ctx->pc = 0x2800f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2800f4: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x2800F4u;
    {
        const bool branch_taken_0x2800f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2800f4) {
            ctx->pc = 0x280468u;
            goto label_280468;
        }
    }
    ctx->pc = 0x2800FCu;
label_2800fc:
    // 0x2800fc: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x2800fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x280100: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280100u;
    {
        const bool branch_taken_0x280100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280100) {
            ctx->pc = 0x280120u;
            goto label_280120;
        }
    }
    ctx->pc = 0x280108u;
    // 0x280108: 0xc781bc18  lwc1        $f1, -0x43E8($gp)
    ctx->pc = 0x280108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28010c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x28010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x280110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280114: 0x0  nop
    ctx->pc = 0x280114u;
    // NOP
    // 0x280118: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x280118u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28011c: 0xe780bc18  swc1        $f0, -0x43E8($gp)
    ctx->pc = 0x28011cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949912), bits); }
label_280120:
    // 0x280120: 0xc122430  jal         func_4890C0
    ctx->pc = 0x280120u;
    SET_GPR_U32(ctx, 31, 0x280128u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x280120u, 0x280128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280128u;
label_280128:
    // 0x280128: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x280128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28012c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28012cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280130: 0xc0a068c  jal         func_281A30
    ctx->pc = 0x280130u;
    SET_GPR_U32(ctx, 31, 0x280138u);
    ctx->pc = 0x281A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281A30u, 0x280130u, 0x280138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280138u;
label_280138:
    // 0x280138: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x280138u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28013c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x28013cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x280140: 0xc0a05e8  jal         func_2817A0
    ctx->pc = 0x280140u;
    SET_GPR_U32(ctx, 31, 0x280148u);
    ctx->pc = 0x2817A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2817A0u, 0x280140u, 0x280148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280148u;
label_280148:
    // 0x280148: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x280148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28014c: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x28014cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x280150: 0xc09e7d0  jal         func_279F40
    ctx->pc = 0x280150u;
    SET_GPR_U32(ctx, 31, 0x280158u);
    ctx->pc = 0x279F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279F40u, 0x280150u, 0x280158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280158u;
label_280158:
    // 0x280158: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x280158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28015c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28015Cu;
    {
        const bool branch_taken_0x28015c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28015c) {
            ctx->pc = 0x28018Cu;
            goto label_28018c;
        }
    }
    ctx->pc = 0x280164u;
label_280164:
    // 0x280164: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x280164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x280168: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x280168u;
    SET_GPR_U32(ctx, 31, 0x280170u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x280168u, 0x280170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280170u;
label_280170:
    // 0x280170: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x280170u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280174: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x280174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x280178: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x280178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x28017c: 0x26c60074  addiu       $a2, $s6, 0x74
    ctx->pc = 0x28017cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 116));
    // 0x280180: 0xc0a05b4  jal         func_2816D0
    ctx->pc = 0x280180u;
    SET_GPR_U32(ctx, 31, 0x280188u);
    ctx->pc = 0x2816D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2816D0u, 0x280180u, 0x280188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280188u;
label_280188:
    // 0x280188: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x280188u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_28018c:
    // 0x28018c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x28018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x280190: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x280190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x280194: 0xc09e7c8  jal         func_279F20
    ctx->pc = 0x280194u;
    SET_GPR_U32(ctx, 31, 0x28019Cu);
    ctx->pc = 0x279F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279F20u, 0x280194u, 0x28019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28019Cu;
label_28019c:
    // 0x28019c: 0x1642fff1  bne         $s2, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x28019Cu;
    {
        const bool branch_taken_0x28019c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x28019c) {
            ctx->pc = 0x280164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280164;
        }
    }
    ctx->pc = 0x2801A4u;
    // 0x2801a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2801a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2801a8: 0xc0a0510  jal         func_281440
    ctx->pc = 0x2801A8u;
    SET_GPR_U32(ctx, 31, 0x2801B0u);
    ctx->pc = 0x281440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281440u, 0x2801A8u, 0x2801B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2801B0u;
label_2801b0:
    // 0x2801b0: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x2801b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x2801b4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2801b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2801b8: 0xc0a04f0  jal         func_2813C0
    ctx->pc = 0x2801B8u;
    SET_GPR_U32(ctx, 31, 0x2801C0u);
    ctx->pc = 0x2813C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813C0u, 0x2801B8u, 0x2801C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2801C0u;
label_2801c0:
    // 0x2801c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2801C0u;
    {
        const bool branch_taken_0x2801c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2801c0) {
            ctx->pc = 0x280210u;
            goto label_280210;
        }
    }
    ctx->pc = 0x2801C8u;
label_2801c8:
    // 0x2801c8: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x2801c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x2801cc: 0xc0a04e8  jal         func_2813A0
    ctx->pc = 0x2801CCu;
    SET_GPR_U32(ctx, 31, 0x2801D4u);
    ctx->pc = 0x2813A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813A0u, 0x2801CCu, 0x2801D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2801D4u;
label_2801d4:
    // 0x2801d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2801d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2801d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2801D8u;
    {
        const bool branch_taken_0x2801d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2801d8) {
            ctx->pc = 0x280204u;
            goto label_280204;
        }
    }
    ctx->pc = 0x2801E0u;
    // 0x2801e0: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x2801e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x2801e4: 0xc0a04e8  jal         func_2813A0
    ctx->pc = 0x2801E4u;
    SET_GPR_U32(ctx, 31, 0x2801ECu);
    ctx->pc = 0x2813A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813A0u, 0x2801E4u, 0x2801ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2801ECu;
label_2801ec:
    // 0x2801ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2801ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2801f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2801f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2801f4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2801f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2801f8: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x2801f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2801fc: 0xc0a04b4  jal         func_2812D0
    ctx->pc = 0x2801FCu;
    SET_GPR_U32(ctx, 31, 0x280204u);
    ctx->pc = 0x2812D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812D0u, 0x2801FCu, 0x280204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280204u;
label_280204:
    // 0x280204: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x280204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x280208: 0xc0a04a4  jal         func_281290
    ctx->pc = 0x280208u;
    SET_GPR_U32(ctx, 31, 0x280210u);
    ctx->pc = 0x281290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281290u, 0x280208u, 0x280210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280210u;
label_280210:
    // 0x280210: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x280210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x280214: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x280214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x280218: 0xc0a0478  jal         func_2811E0
    ctx->pc = 0x280218u;
    SET_GPR_U32(ctx, 31, 0x280220u);
    ctx->pc = 0x2811E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811E0u, 0x280218u, 0x280220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280220u;
label_280220:
    // 0x280220: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x280220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x280224: 0x27a500e4  addiu       $a1, $sp, 0xE4
    ctx->pc = 0x280224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x280228: 0xc041998  jal         func_106660
    ctx->pc = 0x280228u;
    SET_GPR_U32(ctx, 31, 0x280230u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x280228u, 0x280230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280230u;
label_280230:
    // 0x280230: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x280230u;
    {
        const bool branch_taken_0x280230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280230) {
            ctx->pc = 0x2801C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2801c8;
        }
    }
    ctx->pc = 0x280238u;
    // 0x280238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28023c: 0xc0a0470  jal         func_2811C0
    ctx->pc = 0x28023Cu;
    SET_GPR_U32(ctx, 31, 0x280244u);
    ctx->pc = 0x2811C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C0u, 0x28023Cu, 0x280244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280244u;
label_280244:
    // 0x280244: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x280244u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280248: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x280248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x28024c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28024cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280250: 0xc0a0430  jal         func_2810C0
    ctx->pc = 0x280250u;
    SET_GPR_U32(ctx, 31, 0x280258u);
    ctx->pc = 0x2810C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2810C0u, 0x280250u, 0x280258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280258u;
label_280258:
    // 0x280258: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x280258u;
    {
        const bool branch_taken_0x280258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280258) {
            ctx->pc = 0x280420u;
            goto label_280420;
        }
    }
    ctx->pc = 0x280260u;
label_280260:
    // 0x280260: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x280260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x280264: 0xc0a041c  jal         func_281070
    ctx->pc = 0x280264u;
    SET_GPR_U32(ctx, 31, 0x28026Cu);
    ctx->pc = 0x281070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281070u, 0x280264u, 0x28026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28026Cu;
label_28026c:
    // 0x28026c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x28026cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x280270: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x280270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x280274: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x280274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x280278: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28027c: 0xc0a0378  jal         func_280DE0
    ctx->pc = 0x28027Cu;
    SET_GPR_U32(ctx, 31, 0x280284u);
    ctx->pc = 0x280DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280DE0u, 0x28027Cu, 0x280284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280284u;
label_280284:
    // 0x280284: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x280284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x280288: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x280288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x28028c: 0xc0a034c  jal         func_280D30
    ctx->pc = 0x28028Cu;
    SET_GPR_U32(ctx, 31, 0x280294u);
    ctx->pc = 0x280D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D30u, 0x28028Cu, 0x280294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280294u;
label_280294:
    // 0x280294: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x280294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x280298: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x280298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28029c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x28029Cu;
    SET_GPR_U32(ctx, 31, 0x2802A4u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x28029Cu, 0x2802A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2802A4u;
label_2802a4:
    // 0x2802a4: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2802A4u;
    {
        const bool branch_taken_0x2802a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2802a4) {
            ctx->pc = 0x280414u;
            goto label_280414;
        }
    }
    ctx->pc = 0x2802ACu;
    // 0x2802ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2802acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2802b0: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2802B0u;
    {
        const bool branch_taken_0x2802b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2802b0) {
            ctx->pc = 0x280414u;
            goto label_280414;
        }
    }
    ctx->pc = 0x2802B8u;
    // 0x2802b8: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x2802b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2802bc: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2802BCu;
    {
        const bool branch_taken_0x2802bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2802bc) {
            ctx->pc = 0x280374u;
            goto label_280374;
        }
    }
    ctx->pc = 0x2802C4u;
    // 0x2802c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2802c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2802c8: 0xc0a068c  jal         func_281A30
    ctx->pc = 0x2802C8u;
    SET_GPR_U32(ctx, 31, 0x2802D0u);
    ctx->pc = 0x281A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281A30u, 0x2802C8u, 0x2802D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2802D0u;
label_2802d0:
    // 0x2802d0: 0x3c010008  lui         $at, 0x8
    ctx->pc = 0x2802d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8 << 16));
    // 0x2802d4: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x2802d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x2802d8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2802D8u;
    {
        const bool branch_taken_0x2802d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2802d8) {
            ctx->pc = 0x2802F4u;
            goto label_2802f4;
        }
    }
    ctx->pc = 0x2802E0u;
    // 0x2802e0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2802e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2802e4: 0xc0a0330  jal         func_280CC0
    ctx->pc = 0x2802E4u;
    SET_GPR_U32(ctx, 31, 0x2802ECu);
    ctx->pc = 0x280CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280CC0u, 0x2802E4u, 0x2802ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2802ECu;
label_2802ec:
    // 0x2802ec: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2802ECu;
    {
        const bool branch_taken_0x2802ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2802ec) {
            ctx->pc = 0x280420u;
            goto label_280420;
        }
    }
    ctx->pc = 0x2802F4u;
label_2802f4:
    // 0x2802f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2802f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2802f8: 0xc0a068c  jal         func_281A30
    ctx->pc = 0x2802F8u;
    SET_GPR_U32(ctx, 31, 0x280300u);
    ctx->pc = 0x281A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281A30u, 0x2802F8u, 0x280300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280300u;
label_280300:
    // 0x280300: 0x3c010010  lui         $at, 0x10
    ctx->pc = 0x280300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
    // 0x280304: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x280304u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x280308: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x280308u;
    {
        const bool branch_taken_0x280308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x280308) {
            ctx->pc = 0x280374u;
            goto label_280374;
        }
    }
    ctx->pc = 0x280310u;
    // 0x280310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280314: 0xc0a068c  jal         func_281A30
    ctx->pc = 0x280314u;
    SET_GPR_U32(ctx, 31, 0x28031Cu);
    ctx->pc = 0x281A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281A30u, 0x280314u, 0x28031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28031Cu;
label_28031c:
    // 0x28031c: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x28031cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x280320: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x280320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280324: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x280324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x280328: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x280328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28032c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x28032cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x280330: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x280330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x280334: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x280334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x280338: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x280338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x28033c: 0x3acc2  srl         $s5, $v1, 19
    ctx->pc = 0x28033cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 19));
    // 0x280340: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x280340u;
    SET_GPR_U32(ctx, 31, 0x280348u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x280340u, 0x280348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280348u;
label_280348:
    // 0x280348: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x280348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x28034c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x28034cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x280350: 0x1010  mfhi        $v0
    ctx->pc = 0x280350u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x280354: 0x55082b  sltu        $at, $v0, $s5
    ctx->pc = 0x280354u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x280358: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x280358u;
    {
        const bool branch_taken_0x280358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x280358) {
            ctx->pc = 0x280374u;
            goto label_280374;
        }
    }
    ctx->pc = 0x280360u;
    // 0x280360: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x280360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x280364: 0xc0a0330  jal         func_280CC0
    ctx->pc = 0x280364u;
    SET_GPR_U32(ctx, 31, 0x28036Cu);
    ctx->pc = 0x280CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280CC0u, 0x280364u, 0x28036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28036Cu;
label_28036c:
    // 0x28036c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x28036Cu;
    {
        const bool branch_taken_0x28036c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28036c) {
            ctx->pc = 0x280420u;
            goto label_280420;
        }
    }
    ctx->pc = 0x280374u;
label_280374:
    // 0x280374: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x280374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x280378: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x280378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x28037c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28037cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280380: 0xc0a031c  jal         func_280C70
    ctx->pc = 0x280380u;
    SET_GPR_U32(ctx, 31, 0x280388u);
    ctx->pc = 0x280C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280C70u, 0x280380u, 0x280388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280388u;
label_280388:
    // 0x280388: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x280388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28038c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x280390: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x280390u;
    {
        const bool branch_taken_0x280390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x280390) {
            ctx->pc = 0x280420u;
            goto label_280420;
        }
    }
    ctx->pc = 0x280398u;
    // 0x280398: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x280398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28039c: 0xc0ef356  jal         func_3BCD58
    ctx->pc = 0x28039Cu;
    SET_GPR_U32(ctx, 31, 0x2803A4u);
    ctx->pc = 0x3BCD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCD58u, 0x28039Cu, 0x2803A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803A4u;
label_2803a4:
    // 0x2803a4: 0x22823  negu        $a1, $v0
    ctx->pc = 0x2803a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2803a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2803a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803ac: 0xc1208a8  jal         func_4822A0
    ctx->pc = 0x2803ACu;
    SET_GPR_U32(ctx, 31, 0x2803B4u);
    ctx->pc = 0x4822A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4822A0u, 0x2803ACu, 0x2803B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803B4u;
label_2803b4:
    // 0x2803b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2803b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2803b8: 0xc0ef2dc  jal         func_3BCB70
    ctx->pc = 0x2803B8u;
    SET_GPR_U32(ctx, 31, 0x2803C0u);
    ctx->pc = 0x3BCB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCB70u, 0x2803B8u, 0x2803C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803C0u;
label_2803c0:
    // 0x2803c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2803c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2803c4: 0xc0a041c  jal         func_281070
    ctx->pc = 0x2803C4u;
    SET_GPR_U32(ctx, 31, 0x2803CCu);
    ctx->pc = 0x281070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281070u, 0x2803C4u, 0x2803CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803CCu;
label_2803cc:
    // 0x2803cc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2803ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2803d0: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x2803d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2803d4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2803d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2803d8: 0xc0a030c  jal         func_280C30
    ctx->pc = 0x2803D8u;
    SET_GPR_U32(ctx, 31, 0x2803E0u);
    ctx->pc = 0x280C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280C30u, 0x2803D8u, 0x2803E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803E0u;
label_2803e0:
    // 0x2803e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2803e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2803e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803e8: 0xc0a02dc  jal         func_280B70
    ctx->pc = 0x2803E8u;
    SET_GPR_U32(ctx, 31, 0x2803F0u);
    ctx->pc = 0x280B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280B70u, 0x2803E8u, 0x2803F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803F0u;
label_2803f0:
    // 0x2803f0: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x2803F0u;
    {
        const bool branch_taken_0x2803f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2803f0) {
            ctx->pc = 0x280420u;
            goto label_280420;
        }
    }
    ctx->pc = 0x2803F8u;
    // 0x2803f8: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x2803f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x2803fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2803fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280400: 0xc0a02c4  jal         func_280B10
    ctx->pc = 0x280400u;
    SET_GPR_U32(ctx, 31, 0x280408u);
    ctx->pc = 0x280B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280B10u, 0x280400u, 0x280408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280408u;
label_280408:
    // 0x280408: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x280408u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28040c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28040Cu;
    {
        const bool branch_taken_0x28040c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28040c) {
            ctx->pc = 0x280420u;
            goto label_280420;
        }
    }
    ctx->pc = 0x280414u;
label_280414:
    // 0x280414: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x280414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x280418: 0xc0a0330  jal         func_280CC0
    ctx->pc = 0x280418u;
    SET_GPR_U32(ctx, 31, 0x280420u);
    ctx->pc = 0x280CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280CC0u, 0x280418u, 0x280420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280420u;
label_280420:
    // 0x280420: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x280420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x280424: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x280424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280428: 0xc0a0284  jal         func_280A10
    ctx->pc = 0x280428u;
    SET_GPR_U32(ctx, 31, 0x280430u);
    ctx->pc = 0x280A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280A10u, 0x280428u, 0x280430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280430u;
label_280430:
    // 0x280430: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x280430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x280434: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x280434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x280438: 0xc0a0278  jal         func_2809E0
    ctx->pc = 0x280438u;
    SET_GPR_U32(ctx, 31, 0x280440u);
    ctx->pc = 0x2809E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809E0u, 0x280438u, 0x280440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280440u;
label_280440:
    // 0x280440: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x280440u;
    {
        const bool branch_taken_0x280440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280440) {
            ctx->pc = 0x280260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280260;
        }
    }
    ctx->pc = 0x280448u;
    // 0x280448: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x280448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x28044c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28044cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x280450: 0xc0a01d0  jal         func_280740
    ctx->pc = 0x280450u;
    SET_GPR_U32(ctx, 31, 0x280458u);
    ctx->pc = 0x280740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280740u, 0x280450u, 0x280458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280458u;
label_280458:
    // 0x280458: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x280458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x28045c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28045cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x280460: 0xc0a0128  jal         func_2804A0
    ctx->pc = 0x280460u;
    SET_GPR_U32(ctx, 31, 0x280468u);
    ctx->pc = 0x2804A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804A0u, 0x280460u, 0x280468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280468u;
label_280468:
    // 0x280468: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x280468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28046c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28046cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x280470: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x280470u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x280474: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x280474u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280478: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x280478u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28047c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28047cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280480: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x280480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x280484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x280488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28048c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x28048cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x280490: 0x3e00008  jr          $ra
    ctx->pc = 0x280490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280498u;
    // 0x280498: 0x0  nop
    ctx->pc = 0x280498u;
    // NOP
    // 0x28049c: 0x0  nop
    ctx->pc = 0x28049cu;
    // NOP
    ctx->pc = 0x2804a0u;
}
