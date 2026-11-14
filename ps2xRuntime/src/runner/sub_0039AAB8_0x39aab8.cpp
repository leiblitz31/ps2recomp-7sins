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

// Function: sub_0039AAB8
// Address: 0x39aab8 - 0x39ab48
void sub_0039AAB8_0x39aab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AAB8_0x39aab8");
#endif

    switch (ctx->pc) {
        case 0x39aad0u: goto label_39aad0;
        case 0x39aaf8u: goto label_39aaf8;
        default: break;
    }

    ctx->pc = 0x39aab8u;

    // 0x39aab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39aab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39aabc: 0xaf85bd60  sw          $a1, -0x42A0($gp)
    ctx->pc = 0x39aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950240), GPR_U32(ctx, 5));
    // 0x39aac0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39aac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39aac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39aac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39aac8: 0xc0e781c  jal         func_39E070
    ctx->pc = 0x39AAC8u;
    SET_GPR_U32(ctx, 31, 0x39AAD0u);
    ctx->pc = 0x39AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AAC8u;
    // 0x39aacc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E070u, 0x39AAC8u, 0x39AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AAD0u;
label_39aad0:
    // 0x39aad0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x39AAD0u;
    {
        const bool branch_taken_0x39aad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AAD0u;
        // 0x39aad4: 0x3c080062  lui         $t0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aad0) {
            ctx->pc = 0x39AB34u;
            goto label_39ab34;
        }
    }
    ctx->pc = 0x39AAD8u;
    // 0x39aad8: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x39aad8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x39aadc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x39aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39aae0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x39aae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39aae4: 0x2508c578  addiu       $t0, $t0, -0x3A88
    ctx->pc = 0x39aae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952312));
    // 0x39aae8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x39aae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39aaec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x39aaecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39aaf0: 0xc10408c  jal         func_410230
    ctx->pc = 0x39AAF0u;
    SET_GPR_U32(ctx, 31, 0x39AAF8u);
    ctx->pc = 0x39AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AAF0u;
    // 0x39aaf4: 0x3529000b  ori         $t1, $t1, 0xB (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)11);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x39AAF0u, 0x39AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AAF8u;
label_39aaf8:
    // 0x39aaf8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x39aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x39aafc: 0x8f85bd60  lw          $a1, -0x42A0($gp)
    ctx->pc = 0x39aafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950240)));
    // 0x39ab00: 0x2466e880  addiu       $a2, $v1, -0x1780
    ctx->pc = 0x39ab00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x39ab04: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x39ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x39ab08: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39AB08u;
    {
        const bool branch_taken_0x39ab08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB08u;
        // 0x39ab0c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ab08) {
            ctx->pc = 0x39AB34u;
            goto label_39ab34;
        }
    }
    ctx->pc = 0x39AB10u;
    // 0x39ab10: 0x8f84bd64  lw          $a0, -0x429C($gp)
    ctx->pc = 0x39ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950244)));
    // 0x39ab14: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x39ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x39ab18: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x39ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x39ab1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39ab1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ab20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x39ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x39ab24: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x39ab24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x39ab28: 0xaf84bd64  sw          $a0, -0x429C($gp)
    ctx->pc = 0x39ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950244), GPR_U32(ctx, 4));
    // 0x39ab2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39AB2Cu;
    {
        const bool branch_taken_0x39ab2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB2Cu;
        // 0x39ab30: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ab2c) {
            ctx->pc = 0x39AB38u;
            goto label_39ab38;
        }
    }
    ctx->pc = 0x39AB34u;
label_39ab34:
    // 0x39ab34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39ab34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ab38:
    // 0x39ab38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39ab38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ab3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ab3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ab40: 0x3e00008  jr          $ra
    ctx->pc = 0x39AB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB40u;
        // 0x39ab44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AB48u;
}
