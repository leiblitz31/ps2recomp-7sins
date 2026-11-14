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

// Function: sub_00178460
// Address: 0x178460 - 0x178dd0
void sub_00178460_0x178460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178460_0x178460");
#endif

    switch (ctx->pc) {
        case 0x178490u: goto label_178490;
        case 0x1784ccu: goto label_1784cc;
        case 0x1784fcu: goto label_1784fc;
        case 0x17852cu: goto label_17852c;
        case 0x178558u: goto label_178558;
        case 0x17857cu: goto label_17857c;
        case 0x1785a8u: goto label_1785a8;
        case 0x1785c4u: goto label_1785c4;
        case 0x1785f0u: goto label_1785f0;
        case 0x178614u: goto label_178614;
        case 0x178644u: goto label_178644;
        case 0x178660u: goto label_178660;
        case 0x178684u: goto label_178684;
        case 0x178694u: goto label_178694;
        case 0x1786b0u: goto label_1786b0;
        case 0x1786c0u: goto label_1786c0;
        case 0x1786e4u: goto label_1786e4;
        case 0x1786f4u: goto label_1786f4;
        case 0x178758u: goto label_178758;
        case 0x178790u: goto label_178790;
        case 0x1787dcu: goto label_1787dc;
        case 0x178838u: goto label_178838;
        case 0x17886cu: goto label_17886c;
        case 0x1788b4u: goto label_1788b4;
        case 0x178900u: goto label_178900;
        case 0x178934u: goto label_178934;
        case 0x17897cu: goto label_17897c;
        case 0x1789c4u: goto label_1789c4;
        case 0x1789f8u: goto label_1789f8;
        case 0x178a40u: goto label_178a40;
        case 0x178a94u: goto label_178a94;
        case 0x178accu: goto label_178acc;
        case 0x178b18u: goto label_178b18;
        case 0x178b34u: goto label_178b34;
        case 0x178b70u: goto label_178b70;
        case 0x178ba0u: goto label_178ba0;
        case 0x178bd0u: goto label_178bd0;
        case 0x178bfcu: goto label_178bfc;
        case 0x178c1cu: goto label_178c1c;
        case 0x178c48u: goto label_178c48;
        case 0x178c64u: goto label_178c64;
        case 0x178c90u: goto label_178c90;
        case 0x178cb4u: goto label_178cb4;
        case 0x178cecu: goto label_178cec;
        case 0x178d20u: goto label_178d20;
        case 0x178d30u: goto label_178d30;
        case 0x178d50u: goto label_178d50;
        case 0x178d78u: goto label_178d78;
        case 0x178d98u: goto label_178d98;
        default: break;
    }

    ctx->pc = 0x178460u;

    // 0x178460: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x178460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x178464: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x178464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x178468: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x178468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17846c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17846cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x178470: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x178470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x178474: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x178478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17847c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17847cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178480: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x178480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x178484: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x178484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x178488: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x178488u;
    {
        const bool branch_taken_0x178488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178488) {
            ctx->pc = 0x178648u;
            goto label_178648;
        }
    }
    ctx->pc = 0x178490u;
label_178490:
    // 0x178490: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178494: 0x0  nop
    ctx->pc = 0x178494u;
    // NOP
    // 0x178498: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x178498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x17849c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x17849cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1784a0: 0x90820098  lbu         $v0, 0x98($a0)
    ctx->pc = 0x1784a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x1784a4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1784A4u;
    {
        const bool branch_taken_0x1784a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1784a4) {
            ctx->pc = 0x178558u;
            goto label_178558;
        }
    }
    ctx->pc = 0x1784ACu;
    // 0x1784ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1784acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1784b0: 0x0  nop
    ctx->pc = 0x1784b0u;
    // NOP
    // 0x1784b4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1784b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1784b8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1784b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1784bc: 0x24640058  addiu       $a0, $v1, 0x58
    ctx->pc = 0x1784bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x1784c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1784c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784c4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1784C4u;
    SET_GPR_U32(ctx, 31, 0x1784CCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1784C4u, 0x1784CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1784CCu;
label_1784cc:
    // 0x1784cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1784ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1784d0: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x1784d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1784d4: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x1784d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x1784d8: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x1784d8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1784dc: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x1784dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1784e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1784e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1784e4: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x1784e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1784e8: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x1784e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1784ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1784ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1784f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784f4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1784F4u;
    SET_GPR_U32(ctx, 31, 0x1784FCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1784F4u, 0x1784FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1784FCu;
label_1784fc:
    // 0x1784fc: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1784fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178500: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x178500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x178504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178508: 0x0  nop
    ctx->pc = 0x178508u;
    // NOP
    // 0x17850c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17850cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x178510: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x178510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x178514: 0xa3a000af  sb          $zero, 0xAF($sp)
    ctx->pc = 0x178514u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
    // 0x178518: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x178518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17851c: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x17851cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x178520: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178524: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x178524u;
    SET_GPR_U32(ctx, 31, 0x17852Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x178524u, 0x17852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17852Cu;
label_17852c:
    // 0x17852c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17852cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178530: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178534: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x178534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178538: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x178538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17853c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17853cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178540: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x178540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x178544: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x178544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178548: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17854c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17854cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178550: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178550u;
    SET_GPR_U32(ctx, 31, 0x178558u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178550u, 0x178558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178558u;
label_178558:
    // 0x178558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17855c: 0x0  nop
    ctx->pc = 0x17855cu;
    // NOP
    // 0x178560: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x178560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x178564: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x178564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178568: 0x24c70058  addiu       $a3, $a2, 0x58
    ctx->pc = 0x178568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x17856c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x17856cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178570: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178574: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x178574u;
    SET_GPR_U32(ctx, 31, 0x17857Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x178574u, 0x17857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17857Cu;
label_17857c:
    // 0x17857c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17857cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178580: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178584: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x178584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178588: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x178588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17858c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17858cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178590: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x178590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x178594: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x178594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178598: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178598u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17859c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17859cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785a0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1785A0u;
    SET_GPR_U32(ctx, 31, 0x1785A8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1785A0u, 0x1785A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1785A8u;
label_1785a8:
    // 0x1785a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1785a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1785ac: 0xa3a200af  sb          $v0, 0xAF($sp)
    ctx->pc = 0x1785acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 2));
    // 0x1785b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1785b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1785b4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1785b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1785b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1785b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785bc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1785BCu;
    SET_GPR_U32(ctx, 31, 0x1785C4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1785BCu, 0x1785C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1785C4u;
label_1785c4:
    // 0x1785c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1785c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1785c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1785c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1785cc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1785ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1785d0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1785d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1785d4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1785d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1785d8: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x1785d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x1785dc: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x1785dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1785e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1785e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1785e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785e8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1785E8u;
    SET_GPR_U32(ctx, 31, 0x1785F0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1785E8u, 0x1785F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1785F0u;
label_1785f0:
    // 0x1785f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1785f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1785f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1785f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1785f8: 0x0  nop
    ctx->pc = 0x1785f8u;
    // NOP
    // 0x1785fc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1785fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x178600: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178604: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x178604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x178608: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17860c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17860Cu;
    SET_GPR_U32(ctx, 31, 0x178614u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17860Cu, 0x178614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178614u;
label_178614:
    // 0x178614: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x178614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178618: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x178618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17861c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17861cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178620: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x178620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178624: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x178624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x178628: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17862c: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x17862cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x178630: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x178630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178634: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178638: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178638u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17863c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17863Cu;
    SET_GPR_U32(ctx, 31, 0x178644u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17863Cu, 0x178644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178644u;
label_178644:
    // 0x178644: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x178644u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_178648:
    // 0x178648: 0x2e41000e  sltiu       $at, $s2, 0xE
    ctx->pc = 0x178648u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x17864c: 0x1420ff90  bnez        $at, . + 4 + (-0x70 << 2)
    ctx->pc = 0x17864Cu;
    {
        const bool branch_taken_0x17864c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17864c) {
            ctx->pc = 0x178490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178490;
        }
    }
    ctx->pc = 0x178654u;
    // 0x178654: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x178654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178658: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x178658u;
    {
        const bool branch_taken_0x178658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178658) {
            ctx->pc = 0x178B1Cu;
            goto label_178b1c;
        }
    }
    ctx->pc = 0x178660u;
label_178660:
    // 0x178660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178664: 0x0  nop
    ctx->pc = 0x178664u;
    // NOP
    // 0x178668: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x178668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x17866c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x17866cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x178670: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x178670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x178674: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x178674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x178678: 0x24a548f0  addiu       $a1, $a1, 0x48F0
    ctx->pc = 0x178678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18672));
    // 0x17867c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x17867Cu;
    SET_GPR_U32(ctx, 31, 0x178684u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x17867Cu, 0x178684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178684u;
label_178684:
    // 0x178684: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x178684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178688: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x178688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17868c: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x17868Cu;
    SET_GPR_U32(ctx, 31, 0x178694u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17868Cu, 0x178694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178694u;
label_178694:
    // 0x178694: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x178694u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178698: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x178698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17869c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17869cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1786a0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1786a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1786a4: 0x24a54900  addiu       $a1, $a1, 0x4900
    ctx->pc = 0x1786a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18688));
    // 0x1786a8: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1786A8u;
    SET_GPR_U32(ctx, 31, 0x1786B0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1786A8u, 0x1786B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786B0u;
label_1786b0:
    // 0x1786b0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1786b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1786b4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1786b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1786b8: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x1786B8u;
    SET_GPR_U32(ctx, 31, 0x1786C0u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1786B8u, 0x1786C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786C0u;
label_1786c0:
    // 0x1786c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1786c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786c4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1786C4u;
    {
        const bool branch_taken_0x1786c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1786c4) {
            ctx->pc = 0x1786F8u;
            goto label_1786f8;
        }
    }
    ctx->pc = 0x1786CCu;
    // 0x1786cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1786ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1786d0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1786d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1786d4: 0x24a54920  addiu       $a1, $a1, 0x4920
    ctx->pc = 0x1786d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18720));
    // 0x1786d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1786d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786dc: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1786DCu;
    SET_GPR_U32(ctx, 31, 0x1786E4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1786DCu, 0x1786E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786E4u;
label_1786e4:
    // 0x1786e4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1786e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1786e8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1786e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1786ec: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x1786ECu;
    SET_GPR_U32(ctx, 31, 0x1786F4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1786ECu, 0x1786F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786F4u;
label_1786f4:
    // 0x1786f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1786f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1786f8:
    // 0x1786f8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1786f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1786fc: 0x90420098  lbu         $v0, 0x98($v0)
    ctx->pc = 0x1786fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x178700: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x178700u;
    {
        const bool branch_taken_0x178700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178700) {
            ctx->pc = 0x1788B4u;
            goto label_1788b4;
        }
    }
    ctx->pc = 0x178708u;
    // 0x178708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17870c: 0x0  nop
    ctx->pc = 0x17870cu;
    // NOP
    // 0x178710: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x178710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x178714: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178718: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x178718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x17871c: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x17871cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x178720: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x178720u;
    {
        const bool branch_taken_0x178720 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x178720) {
            ctx->pc = 0x178760u;
            goto label_178760;
        }
    }
    ctx->pc = 0x178728u;
    // 0x178728: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x178728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17872c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17872cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x178730: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x178730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178734: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x178734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x178738: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x178738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17873c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17873cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178740: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x178740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x178744: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x178744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178748: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17874c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17874cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178750: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178750u;
    SET_GPR_U32(ctx, 31, 0x178758u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178750u, 0x178758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178758u;
label_178758:
    // 0x178758: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x178758u;
    {
        const bool branch_taken_0x178758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178758) {
            ctx->pc = 0x178790u;
            goto label_178790;
        }
    }
    ctx->pc = 0x178760u;
label_178760:
    // 0x178760: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x178760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178764: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x178764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x178768: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x178768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17876c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17876cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x178770: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x178770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178774: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178778: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x178778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17877c: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x17877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178780: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178784: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178788: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178788u;
    SET_GPR_U32(ctx, 31, 0x178790u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178788u, 0x178790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178790u;
label_178790:
    // 0x178790: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x178790u;
    {
        const bool branch_taken_0x178790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x178790) {
            ctx->pc = 0x1787DCu;
            goto label_1787dc;
        }
    }
    ctx->pc = 0x178798u;
    // 0x178798: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17879c: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x17879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1787a0: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1787a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1787a4: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1787A4u;
    {
        const bool branch_taken_0x1787a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1787a4) {
            ctx->pc = 0x1787DCu;
            goto label_1787dc;
        }
    }
    ctx->pc = 0x1787ACu;
    // 0x1787ac: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1787acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1787b0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1787b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1787b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1787b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1787b8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1787b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1787bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1787bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1787c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1787c4: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x1787c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1787c8: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x1787c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1787cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1787ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1787d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787d4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1787D4u;
    SET_GPR_U32(ctx, 31, 0x1787DCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1787D4u, 0x1787DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1787DCu;
label_1787dc:
    // 0x1787dc: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1787dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1787e0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1787e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1787e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1787e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1787e8: 0x0  nop
    ctx->pc = 0x1787e8u;
    // NOP
    // 0x1787ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1787ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1787f0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1787f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1787f4: 0xa3a000af  sb          $zero, 0xAF($sp)
    ctx->pc = 0x1787f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
    // 0x1787f8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1787f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1787fc: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1787fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x178800: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x178800u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x178804: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x178804u;
    {
        const bool branch_taken_0x178804 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x178804) {
            ctx->pc = 0x178840u;
            goto label_178840;
        }
    }
    ctx->pc = 0x17880Cu;
    // 0x17880c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178810: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x178810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178814: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x178814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x178818: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x178818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17881c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17881cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178820: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x178820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x178824: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x178824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178828: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17882c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17882cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178830: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178830u;
    SET_GPR_U32(ctx, 31, 0x178838u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178830u, 0x178838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178838u;
label_178838:
    // 0x178838: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x178838u;
    {
        const bool branch_taken_0x178838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178838) {
            ctx->pc = 0x17886Cu;
            goto label_17886c;
        }
    }
    ctx->pc = 0x178840u;
label_178840:
    // 0x178840: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178844: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x178844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178848: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x178848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17884c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17884cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178850: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x178850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178854: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x178854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x178858: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x178858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17885c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17885cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178860: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178860u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178864: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178864u;
    SET_GPR_U32(ctx, 31, 0x17886Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178864u, 0x17886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17886Cu;
label_17886c:
    // 0x17886c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17886Cu;
    {
        const bool branch_taken_0x17886c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17886c) {
            ctx->pc = 0x1788B4u;
            goto label_1788b4;
        }
    }
    ctx->pc = 0x178874u;
    // 0x178874: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178878: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x178878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x17887c: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x17887cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x178880: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x178880u;
    {
        const bool branch_taken_0x178880 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x178880) {
            ctx->pc = 0x1788B4u;
            goto label_1788b4;
        }
    }
    ctx->pc = 0x178888u;
    // 0x178888: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17888c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17888cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178890: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x178890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x178894: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x178894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178898: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x178898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17889c: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x17889cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x1788a0: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x1788a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1788a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1788a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1788a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788ac: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1788ACu;
    SET_GPR_U32(ctx, 31, 0x1788B4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1788ACu, 0x1788B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1788B4u;
label_1788b4:
    // 0x1788b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1788b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1788b8: 0x0  nop
    ctx->pc = 0x1788b8u;
    // NOP
    // 0x1788bc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1788bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1788c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1788c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1788c4: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1788c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1788c8: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1788c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1788cc: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1788CCu;
    {
        const bool branch_taken_0x1788cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1788cc) {
            ctx->pc = 0x178908u;
            goto label_178908;
        }
    }
    ctx->pc = 0x1788D4u;
    // 0x1788d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1788d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1788d8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1788d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1788dc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1788dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1788e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1788e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1788e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1788e8: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x1788e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1788ec: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x1788ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1788f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1788f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1788f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788f8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1788F8u;
    SET_GPR_U32(ctx, 31, 0x178900u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1788F8u, 0x178900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178900u;
label_178900:
    // 0x178900: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x178900u;
    {
        const bool branch_taken_0x178900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178900) {
            ctx->pc = 0x178934u;
            goto label_178934;
        }
    }
    ctx->pc = 0x178908u;
label_178908:
    // 0x178908: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17890c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17890cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178910: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x178910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x178914: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x178914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178918: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17891c: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x17891cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x178920: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x178920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178924: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178928: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178928u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17892c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17892Cu;
    SET_GPR_U32(ctx, 31, 0x178934u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17892Cu, 0x178934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178934u;
label_178934:
    // 0x178934: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x178934u;
    {
        const bool branch_taken_0x178934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x178934) {
            ctx->pc = 0x17897Cu;
            goto label_17897c;
        }
    }
    ctx->pc = 0x17893Cu;
    // 0x17893c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17893cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178940: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x178940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x178944: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x178944u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x178948: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x178948u;
    {
        const bool branch_taken_0x178948 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x178948) {
            ctx->pc = 0x17897Cu;
            goto label_17897c;
        }
    }
    ctx->pc = 0x178950u;
    // 0x178950: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178954: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x178954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178958: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x178958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17895c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17895cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178960: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178964: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x178964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x178968: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x178968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17896c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17896cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178970: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178974: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178974u;
    SET_GPR_U32(ctx, 31, 0x17897Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178974u, 0x17897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17897Cu;
label_17897c:
    // 0x17897c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17897cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178980: 0xa3a200af  sb          $v0, 0xAF($sp)
    ctx->pc = 0x178980u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 2));
    // 0x178984: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178988: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x178988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x17898c: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x17898cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x178990: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x178990u;
    {
        const bool branch_taken_0x178990 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x178990) {
            ctx->pc = 0x1789CCu;
            goto label_1789cc;
        }
    }
    ctx->pc = 0x178998u;
    // 0x178998: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17899c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17899cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1789a0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1789a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1789a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1789a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1789a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1789ac: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x1789acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x1789b0: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x1789b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1789b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1789b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1789b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789bc: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1789BCu;
    SET_GPR_U32(ctx, 31, 0x1789C4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1789BCu, 0x1789C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789C4u;
label_1789c4:
    // 0x1789c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1789C4u;
    {
        const bool branch_taken_0x1789c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1789c4) {
            ctx->pc = 0x1789F8u;
            goto label_1789f8;
        }
    }
    ctx->pc = 0x1789CCu;
label_1789cc:
    // 0x1789cc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1789ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1789d0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1789d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1789d4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1789d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1789d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1789d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1789dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1789e0: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x1789e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x1789e4: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x1789e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1789e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1789e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1789ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789f0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1789F0u;
    SET_GPR_U32(ctx, 31, 0x1789F8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1789F0u, 0x1789F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789F8u;
label_1789f8:
    // 0x1789f8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1789F8u;
    {
        const bool branch_taken_0x1789f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1789f8) {
            ctx->pc = 0x178A40u;
            goto label_178a40;
        }
    }
    ctx->pc = 0x178A00u;
    // 0x178a00: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178a04: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x178a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x178a08: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x178a08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x178a0c: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x178A0Cu;
    {
        const bool branch_taken_0x178a0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x178a0c) {
            ctx->pc = 0x178A40u;
            goto label_178a40;
        }
    }
    ctx->pc = 0x178A14u;
    // 0x178a14: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178a18: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x178a18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178a1c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x178a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x178a20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x178a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a24: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x178a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178a28: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x178a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x178a2c: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x178a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178a30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178a34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a38: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178A38u;
    SET_GPR_U32(ctx, 31, 0x178A40u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178A38u, 0x178A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A40u;
label_178a40:
    // 0x178a40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178a48: 0x0  nop
    ctx->pc = 0x178a48u;
    // NOP
    // 0x178a4c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x178a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x178a50: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178a54: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x178a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x178a58: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x178a58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x178a5c: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x178A5Cu;
    {
        const bool branch_taken_0x178a5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x178a5c) {
            ctx->pc = 0x178A9Cu;
            goto label_178a9c;
        }
    }
    ctx->pc = 0x178A64u;
    // 0x178a64: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x178a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178a68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178a6c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x178a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178a70: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x178a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x178a74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x178a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178a7c: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x178a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x178a80: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x178a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178a84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178a84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178a88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a8c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178A8Cu;
    SET_GPR_U32(ctx, 31, 0x178A94u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178A8Cu, 0x178A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A94u;
label_178a94:
    // 0x178a94: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x178A94u;
    {
        const bool branch_taken_0x178a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178a94) {
            ctx->pc = 0x178ACCu;
            goto label_178acc;
        }
    }
    ctx->pc = 0x178A9Cu;
label_178a9c:
    // 0x178a9c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x178a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178aa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178aa4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x178aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178aa8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x178aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x178aac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x178aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ab0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178ab4: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x178ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x178ab8: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x178ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178abc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178abcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ac0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178ac0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ac4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178AC4u;
    SET_GPR_U32(ctx, 31, 0x178ACCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178AC4u, 0x178ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178ACCu;
label_178acc:
    // 0x178acc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x178ACCu;
    {
        const bool branch_taken_0x178acc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x178acc) {
            ctx->pc = 0x178B18u;
            goto label_178b18;
        }
    }
    ctx->pc = 0x178AD4u;
    // 0x178ad4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178ad8: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x178ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x178adc: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x178adcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x178ae0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x178AE0u;
    {
        const bool branch_taken_0x178ae0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x178ae0) {
            ctx->pc = 0x178B18u;
            goto label_178b18;
        }
    }
    ctx->pc = 0x178AE8u;
    // 0x178ae8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x178ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178aec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178af0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x178af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178af4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x178af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x178af8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x178af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178afc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178b00: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x178b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x178b04: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x178b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178b08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178b08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178b0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b10: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178B10u;
    SET_GPR_U32(ctx, 31, 0x178B18u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178B10u, 0x178B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B18u;
label_178b18:
    // 0x178b18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x178b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_178b1c:
    // 0x178b1c: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x178b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x178b20: 0x1440fecf  bnez        $v0, . + 4 + (-0x131 << 2)
    ctx->pc = 0x178B20u;
    {
        const bool branch_taken_0x178b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178b20) {
            ctx->pc = 0x178660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178660;
        }
    }
    ctx->pc = 0x178B28u;
    // 0x178b28: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x178b28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x178b2c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x178B2Cu;
    {
        const bool branch_taken_0x178b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178b2c) {
            ctx->pc = 0x178CF8u;
            goto label_178cf8;
        }
    }
    ctx->pc = 0x178B34u;
label_178b34:
    // 0x178b34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178b38: 0x0  nop
    ctx->pc = 0x178b38u;
    // NOP
    // 0x178b3c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x178b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x178b40: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178b44: 0x90420098  lbu         $v0, 0x98($v0)
    ctx->pc = 0x178b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x178b48: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x178B48u;
    {
        const bool branch_taken_0x178b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178b48) {
            ctx->pc = 0x178BFCu;
            goto label_178bfc;
        }
    }
    ctx->pc = 0x178B50u;
    // 0x178b50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178b54: 0x0  nop
    ctx->pc = 0x178b54u;
    // NOP
    // 0x178b58: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x178b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x178b5c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178b60: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x178b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x178b64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b68: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x178B68u;
    SET_GPR_U32(ctx, 31, 0x178B70u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x178B68u, 0x178B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B70u;
label_178b70:
    // 0x178b70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x178b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178b74: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x178b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178b78: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x178b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x178b7c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x178b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178b80: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x178b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x178b84: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178b88: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x178b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x178b8c: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x178b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178b90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178b94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b98: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178B98u;
    SET_GPR_U32(ctx, 31, 0x178BA0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178B98u, 0x178BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178BA0u;
label_178ba0:
    // 0x178ba0: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x178ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178ba4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x178ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x178ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178bac: 0x0  nop
    ctx->pc = 0x178bacu;
    // NOP
    // 0x178bb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x178bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x178bb4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x178bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x178bb8: 0xa3a000af  sb          $zero, 0xAF($sp)
    ctx->pc = 0x178bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
    // 0x178bbc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178bc0: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x178bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x178bc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bc8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x178BC8u;
    SET_GPR_U32(ctx, 31, 0x178BD0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x178BC8u, 0x178BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178BD0u;
label_178bd0:
    // 0x178bd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x178bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178bd4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178bd8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x178bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178bdc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x178bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x178be0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x178be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178be4: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x178be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x178be8: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x178be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178bec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178becu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178bf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bf4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178BF4u;
    SET_GPR_U32(ctx, 31, 0x178BFCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178BF4u, 0x178BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178BFCu;
label_178bfc:
    // 0x178bfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178c00: 0x0  nop
    ctx->pc = 0x178c00u;
    // NOP
    // 0x178c04: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x178c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x178c08: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178c0c: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x178c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x178c10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c14: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x178C14u;
    SET_GPR_U32(ctx, 31, 0x178C1Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x178C14u, 0x178C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C1Cu;
label_178c1c:
    // 0x178c1c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x178c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178c20: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178c24: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x178c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178c28: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x178c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x178c2c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178c30: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x178c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x178c34: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x178c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178c38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178c38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178c3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c40: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178C40u;
    SET_GPR_U32(ctx, 31, 0x178C48u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178C40u, 0x178C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C48u;
label_178c48:
    // 0x178c48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178c4c: 0xa3a200af  sb          $v0, 0xAF($sp)
    ctx->pc = 0x178c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 2));
    // 0x178c50: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178c54: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x178c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x178c58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c5c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x178C5Cu;
    SET_GPR_U32(ctx, 31, 0x178C64u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x178C5Cu, 0x178C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C64u;
label_178c64:
    // 0x178c64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x178c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178c68: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178c6c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x178c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178c70: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x178c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x178c74: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x178c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178c78: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x178c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x178c7c: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x178c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178c80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178c80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178c84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c88: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178C88u;
    SET_GPR_U32(ctx, 31, 0x178C90u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178C88u, 0x178C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C90u;
label_178c90:
    // 0x178c90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178c98: 0x0  nop
    ctx->pc = 0x178c98u;
    // NOP
    // 0x178c9c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x178c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x178ca0: 0x8fb200b0  lw          $s2, 0xB0($sp)
    ctx->pc = 0x178ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178ca4: 0x26440064  addiu       $a0, $s2, 0x64
    ctx->pc = 0x178ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x178ca8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cac: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x178CACu;
    SET_GPR_U32(ctx, 31, 0x178CB4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x178CACu, 0x178CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178CB4u;
label_178cb4:
    // 0x178cb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178cb8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x178cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178cbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178cc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x178cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178cc4: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x178cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x178cc8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x178cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ccc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x178cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cd0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178cd4: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x178cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x178cd8: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x178cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178cdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178cdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ce0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178ce0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ce4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178CE4u;
    SET_GPR_U32(ctx, 31, 0x178CECu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178CE4u, 0x178CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178CECu;
label_178cec:
    // 0x178cec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cf0: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x178cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x178cf4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x178cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_178cf8:
    // 0x178cf8: 0x2e210006  sltiu       $at, $s1, 0x6
    ctx->pc = 0x178cf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x178cfc: 0x1420ff8d  bnez        $at, . + 4 + (-0x73 << 2)
    ctx->pc = 0x178CFCu;
    {
        const bool branch_taken_0x178cfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x178cfc) {
            ctx->pc = 0x178B34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178b34;
        }
    }
    ctx->pc = 0x178D04u;
    // 0x178d04: 0x8f87bbdc  lw          $a3, -0x4424($gp)
    ctx->pc = 0x178d04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x178d08: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x178d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d0c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x178d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x178d10: 0x24424cf0  addiu       $v0, $v0, 0x4CF0
    ctx->pc = 0x178d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19696));
    // 0x178d14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x178d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d18: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x178D18u;
    SET_GPR_U32(ctx, 31, 0x178D20u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x178D18u, 0x178D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D20u;
label_178d20:
    // 0x178d20: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x178d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x178d24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x178d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d28: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x178D28u;
    SET_GPR_U32(ctx, 31, 0x178D30u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x178D28u, 0x178D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D30u;
label_178d30:
    // 0x178d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d34: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178d38: 0x24450064  addiu       $a1, $v0, 0x64
    ctx->pc = 0x178d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x178d3c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x178d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d40: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x178d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x178d44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x178d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d48: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x178D48u;
    SET_GPR_U32(ctx, 31, 0x178D50u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x178D48u, 0x178D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D50u;
label_178d50:
    // 0x178d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d54: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x178d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178d58: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x178d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178d5c: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x178d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x178d60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d64: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x178d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d68: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x178d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x178d6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x178d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178d70: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x178D70u;
    SET_GPR_U32(ctx, 31, 0x178D78u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x178D70u, 0x178D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D78u;
label_178d78:
    // 0x178d78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x178d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178d7c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178d80: 0xa0450098  sb          $a1, 0x98($v0)
    ctx->pc = 0x178d80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 152), (uint8_t)GPR_U32(ctx, 5));
    // 0x178d84: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x178d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x178d88: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x178d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178d8c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x178d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d90: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x178D90u;
    SET_GPR_U32(ctx, 31, 0x178D98u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x178D90u, 0x178D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D98u;
label_178d98:
    // 0x178d98: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x178d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d9c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x178d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178da0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x178da0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178da4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x178da4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178da8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x178da8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178dac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178db8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x178db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x178dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x178DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178DC4u;
    // 0x178dc4: 0x0  nop
    ctx->pc = 0x178dc4u;
    // NOP
    // 0x178dc8: 0x0  nop
    ctx->pc = 0x178dc8u;
    // NOP
    // 0x178dcc: 0x0  nop
    ctx->pc = 0x178dccu;
    // NOP
    ctx->pc = 0x178dd0u;
}
