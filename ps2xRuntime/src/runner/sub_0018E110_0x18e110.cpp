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

// Function: sub_0018E110
// Address: 0x18e110 - 0x18e280
void sub_0018E110_0x18e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E110_0x18e110");
#endif

    switch (ctx->pc) {
        case 0x18e144u: goto label_18e144;
        case 0x18e158u: goto label_18e158;
        case 0x18e17cu: goto label_18e17c;
        case 0x18e1a4u: goto label_18e1a4;
        case 0x18e1c8u: goto label_18e1c8;
        case 0x18e1f0u: goto label_18e1f0;
        case 0x18e220u: goto label_18e220;
        case 0x18e230u: goto label_18e230;
        case 0x18e25cu: goto label_18e25c;
        default: break;
    }

    ctx->pc = 0x18e110u;

    // 0x18e110: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x18e110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18e114: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18e114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18e118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18e11c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e124: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x18e124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x18e128: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x18e128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x18e12c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x18e12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x18e130: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x18e130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x18e134: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x18e134u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x18e138: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x18e138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e13c: 0xc0637f0  jal         func_18DFC0
    ctx->pc = 0x18E13Cu;
    SET_GPR_U32(ctx, 31, 0x18E144u);
    ctx->pc = 0x18DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DFC0u, 0x18E13Cu, 0x18E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E144u;
label_18e144:
    // 0x18e144: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x18e144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x18e148: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x18e148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x18e14c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x18e14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18e150: 0xc041954  jal         func_106550
    ctx->pc = 0x18E150u;
    SET_GPR_U32(ctx, 31, 0x18E158u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x18E150u, 0x18E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E158u;
label_18e158:
    // 0x18e158: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x18e158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x18e15c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e160: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x18e160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e164: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x18e164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e168: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x18e168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18e16c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18e16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e170: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e174: 0xc063d4c  jal         func_18F530
    ctx->pc = 0x18E174u;
    SET_GPR_U32(ctx, 31, 0x18E17Cu);
    ctx->pc = 0x18F530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F530u, 0x18E174u, 0x18E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E17Cu;
label_18e17c:
    // 0x18e17c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18e17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e180: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x18e180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e184: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x18e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e188: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x18e188u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e18c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e190: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x18e190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18e194: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18e194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e198: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x18e198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x18e19c: 0xc0638f0  jal         func_18E3C0
    ctx->pc = 0x18E19Cu;
    SET_GPR_U32(ctx, 31, 0x18E1A4u);
    ctx->pc = 0x18E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E3C0u, 0x18E19Cu, 0x18E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1A4u;
label_18e1a4:
    // 0x18e1a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1a8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x18e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18e1ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e1b0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E1B0u;
    {
        const bool branch_taken_0x18e1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e1b0) {
            ctx->pc = 0x18E1D4u;
            goto label_18e1d4;
        }
    }
    ctx->pc = 0x18E1B8u;
    // 0x18e1b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1bc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x18e1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18e1c0: 0xc063910  jal         func_18E440
    ctx->pc = 0x18E1C0u;
    SET_GPR_U32(ctx, 31, 0x18E1C8u);
    ctx->pc = 0x18E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E440u, 0x18E1C0u, 0x18E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1C8u;
label_18e1c8:
    // 0x18e1c8: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x18e1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x18e1cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18E1CCu;
    {
        const bool branch_taken_0x18e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1cc) {
            ctx->pc = 0x18E1F4u;
            goto label_18e1f4;
        }
    }
    ctx->pc = 0x18E1D4u;
label_18e1d4:
    // 0x18e1d4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x18e1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e1d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1dc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x18e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18e1e0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x18e1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18e1e4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x18e1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x18e1e8: 0xc0638d0  jal         func_18E340
    ctx->pc = 0x18E1E8u;
    SET_GPR_U32(ctx, 31, 0x18E1F0u);
    ctx->pc = 0x18E340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E340u, 0x18E1E8u, 0x18E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1F0u;
label_18e1f0:
    // 0x18e1f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e1f4:
    // 0x18e1f4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x18e1f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18e1f8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E1F8u;
    {
        const bool branch_taken_0x18e1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e1f8) {
            ctx->pc = 0x18E224u;
            goto label_18e224;
        }
    }
    ctx->pc = 0x18E200u;
    // 0x18e200: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x18e200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e204: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x18e204u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e208: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18e208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18e20c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x18e20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18e210: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18e210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e214: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x18e214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18e218: 0xc0638f0  jal         func_18E3C0
    ctx->pc = 0x18E218u;
    SET_GPR_U32(ctx, 31, 0x18E220u);
    ctx->pc = 0x18E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E3C0u, 0x18E218u, 0x18E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E220u;
label_18e220:
    // 0x18e220: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e224:
    // 0x18e224: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x18e224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e228: 0xc0638b4  jal         func_18E2D0
    ctx->pc = 0x18E228u;
    SET_GPR_U32(ctx, 31, 0x18E230u);
    ctx->pc = 0x18E2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E2D0u, 0x18E228u, 0x18E230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E230u;
label_18e230:
    // 0x18e230: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x18e230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x18e234: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x18e234u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18e238: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18e23c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e240: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18e240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18e244: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x18e244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18e248: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x18e248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e24c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18e24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e250: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18e250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e254: 0xc0638a0  jal         func_18E280
    ctx->pc = 0x18E254u;
    SET_GPR_U32(ctx, 31, 0x18E25Cu);
    ctx->pc = 0x18E280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E280u, 0x18E254u, 0x18E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E25Cu;
label_18e25c:
    // 0x18e25c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18e25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e260: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e264: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e268: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e26c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x18e26cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18e270: 0x3e00008  jr          $ra
    ctx->pc = 0x18E270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E278u;
    // 0x18e278: 0x0  nop
    ctx->pc = 0x18e278u;
    // NOP
    // 0x18e27c: 0x0  nop
    ctx->pc = 0x18e27cu;
    // NOP
    ctx->pc = 0x18e280u;
}
