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

// Function: sub_00464220
// Address: 0x464220 - 0x4642f0
void sub_00464220_0x464220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464220_0x464220");
#endif

    switch (ctx->pc) {
        case 0x464250u: goto label_464250;
        case 0x464264u: goto label_464264;
        case 0x464290u: goto label_464290;
        case 0x4642d0u: goto label_4642d0;
        default: break;
    }

    ctx->pc = 0x464220u;

    // 0x464220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x464220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x464224: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x464224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x464228: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x464228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x46422c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46422cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x464230: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x464230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x464234: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x464238: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x464238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x46423c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x46423cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x464240: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x464240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x464244: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x464244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x464248: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x464248u;
    SET_GPR_U32(ctx, 31, 0x464250u);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x464248u, 0x464250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464250u;
label_464250:
    // 0x464250: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x464250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464254: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x464254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x464258: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x464258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x46425c: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x46425Cu;
    SET_GPR_U32(ctx, 31, 0x464264u);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x46425Cu, 0x464264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464264u;
label_464264:
    // 0x464264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x464264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464268: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x464268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46426c: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x46426Cu;
    {
        const bool branch_taken_0x46426c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x46426c) {
            ctx->pc = 0x464298u;
            goto label_464298;
        }
    }
    ctx->pc = 0x464274u;
    // 0x464274: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x464274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x464278: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x464278u;
    {
        const bool branch_taken_0x464278 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x464278) {
            ctx->pc = 0x464298u;
            goto label_464298;
        }
    }
    ctx->pc = 0x464280u;
    // 0x464280: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x464280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464284: 0x2785b290  addiu       $a1, $gp, -0x4D70
    ctx->pc = 0x464284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947472));
    // 0x464288: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x464288u;
    SET_GPR_U32(ctx, 31, 0x464290u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x464288u, 0x464290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464290u;
label_464290:
    // 0x464290: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x464290u;
    {
        const bool branch_taken_0x464290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464290) {
            ctx->pc = 0x4642D0u;
            goto label_4642d0;
        }
    }
    ctx->pc = 0x464298u;
label_464298:
    // 0x464298: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x464298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x46429c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x46429Cu;
    {
        const bool branch_taken_0x46429c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46429c) {
            ctx->pc = 0x4642B0u;
            goto label_4642b0;
        }
    }
    ctx->pc = 0x4642A4u;
    // 0x4642a4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x4642a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4642a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4642A8u;
    {
        const bool branch_taken_0x4642a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4642a8) {
            ctx->pc = 0x4642B4u;
            goto label_4642b4;
        }
    }
    ctx->pc = 0x4642B0u;
label_4642b0:
    // 0x4642b0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x4642b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4642b4:
    // 0x4642b4: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x4642b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4642b8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4642b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4642bc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x4642bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4642c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4642c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4642c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4642c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4642c8: 0xc043764  jal         func_10DD90
    ctx->pc = 0x4642C8u;
    SET_GPR_U32(ctx, 31, 0x4642D0u);
    ctx->pc = 0x10DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD90u, 0x4642C8u, 0x4642D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4642D0u;
label_4642d0:
    // 0x4642d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4642d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4642d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4642d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4642d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4642d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4642dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4642dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4642e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4642e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4642e4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4642e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4642e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4642E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4642E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4642F0u;
}
