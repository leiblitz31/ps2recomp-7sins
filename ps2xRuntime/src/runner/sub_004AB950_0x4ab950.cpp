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

// Function: sub_004AB950
// Address: 0x4ab950 - 0x4ab9b0
void sub_004AB950_0x4ab950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB950_0x4ab950");
#endif

    switch (ctx->pc) {
        case 0x4ab96cu: goto label_4ab96c;
        default: break;
    }

    ctx->pc = 0x4ab950u;

    // 0x4ab950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ab950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ab954: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4ab954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4ab958: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ab958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ab95c: 0x34a50800  ori         $a1, $a1, 0x800
    ctx->pc = 0x4ab95cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    // 0x4ab960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ab960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ab964: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x4AB964u;
    SET_GPR_U32(ctx, 31, 0x4AB96Cu);
    ctx->pc = 0x4AB968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB964u;
    // 0x4ab968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4AB964u, 0x4AB96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB96Cu;
label_4ab96c:
    // 0x4ab96c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ab96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab970: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x4AB970u;
    {
        const bool branch_taken_0x4ab970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB970u;
        // 0x4ab974: 0x24a30010  addiu       $v1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab970) {
            ctx->pc = 0x4AB99Cu;
            goto label_4ab99c;
        }
    }
    ctx->pc = 0x4AB978u;
    // 0x4ab978: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x4ab978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4ab97c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x4ab97cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x4ab980: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4ab980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4ab984: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x4ab984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x4ab988: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4ab988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4ab98c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4ab98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4ab990: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4ab990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4ab994: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4ab994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4ab998: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4ab998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4ab99c:
    // 0x4ab99c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ab99cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ab9a0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4ab9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ab9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB9A8u;
        // 0x4ab9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB9B0u;
}
