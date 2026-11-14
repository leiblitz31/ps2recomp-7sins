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

// Function: sub_00157DD0
// Address: 0x157dd0 - 0x157e90
void sub_00157DD0_0x157dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157DD0_0x157dd0");
#endif

    switch (ctx->pc) {
        case 0x157e00u: goto label_157e00;
        case 0x157e30u: goto label_157e30;
        case 0x157e40u: goto label_157e40;
        default: break;
    }

    ctx->pc = 0x157dd0u;

    // 0x157dd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x157dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x157dd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x157dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x157dd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x157dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x157ddc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x157ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x157de0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x157de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x157de4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x157de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x157de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157dec: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x157decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x157df0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x157df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x157df4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x157df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x157df8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x157DF8u;
    SET_GPR_U32(ctx, 31, 0x157E00u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x157DF8u, 0x157E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E00u;
label_157e00:
    // 0x157e00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x157e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e04: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x157E04u;
    {
        const bool branch_taken_0x157e04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e04) {
            ctx->pc = 0x157E68u;
            goto label_157e68;
        }
    }
    ctx->pc = 0x157E0Cu;
    // 0x157e0c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x157e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x157e10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x157e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x157e14: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x157e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e18: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x157e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x157e1c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x157e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x157e20: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x157e20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x157e24: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x157e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e28: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x157E28u;
    {
        const bool branch_taken_0x157e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e28) {
            ctx->pc = 0x157E5Cu;
            goto label_157e5c;
        }
    }
    ctx->pc = 0x157E30u;
label_157e30:
    // 0x157e30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x157e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157e34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x157e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e38: 0xc0400e0  jal         func_100380
    ctx->pc = 0x157E38u;
    SET_GPR_U32(ctx, 31, 0x157E40u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x157E38u, 0x157E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E40u;
label_157e40:
    // 0x157e40: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x157e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x157e44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157E44u;
    {
        const bool branch_taken_0x157e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e44) {
            ctx->pc = 0x157E54u;
            goto label_157e54;
        }
    }
    ctx->pc = 0x157E4Cu;
    // 0x157e4c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x157e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x157e50: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x157e50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_157e54:
    // 0x157e54: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x157e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x157e58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x157e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_157e5c:
    // 0x157e5c: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x157E5Cu;
    {
        const bool branch_taken_0x157e5c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x157e5c) {
            ctx->pc = 0x157E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157e30;
        }
    }
    ctx->pc = 0x157E64u;
    // 0x157e64: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x157e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_157e68:
    // 0x157e68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x157e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e6c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x157e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157e70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x157e70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157e74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x157e74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157e78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x157e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157e7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157e84: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x157e84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x157e88: 0x3e00008  jr          $ra
    ctx->pc = 0x157E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157E90u;
}
