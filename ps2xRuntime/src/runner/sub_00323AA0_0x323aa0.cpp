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

// Function: sub_00323AA0
// Address: 0x323aa0 - 0x323b30
void sub_00323AA0_0x323aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323AA0_0x323aa0");
#endif

    switch (ctx->pc) {
        case 0x323b1cu: goto label_323b1c;
        default: break;
    }

    ctx->pc = 0x323aa0u;

    // 0x323aa0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x323aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x323aa4: 0x8c43b1ec  lw          $v1, -0x4E14($v0)
    ctx->pc = 0x323aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x323aa8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x323aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x323aac: 0x3e00008  jr          $ra
    ctx->pc = 0x323AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AACu;
        // 0x323ab0: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323AB4u;
    // 0x323ab4: 0x0  nop
    ctx->pc = 0x323ab4u;
    // NOP
    // 0x323ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323abc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x323abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x323ac0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323acc: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x323accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x323ad0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x323ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x323ad4: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x323AD4u;
    {
        const bool branch_taken_0x323ad4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x323AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AD4u;
        // 0x323ad8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323ad4) {
            ctx->pc = 0x323B20u;
            goto label_323b20;
        }
    }
    ctx->pc = 0x323ADCu;
    // 0x323adc: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x323adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x323ae0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x323ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x323ae4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x323AE4u;
    {
        const bool branch_taken_0x323ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AE4u;
        // 0x323ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323ae4) {
            ctx->pc = 0x323B20u;
            goto label_323b20;
        }
    }
    ctx->pc = 0x323AECu;
    // 0x323aec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x323aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x323af0: 0x2442b1e0  addiu       $v0, $v0, -0x4E20
    ctx->pc = 0x323af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x323af4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x323af4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x323af8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x323af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x323afc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x323afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x323b00: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x323b00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x323b04: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x323b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x323b08: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x323b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x323b0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x323B0Cu;
    {
        const bool branch_taken_0x323b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B0Cu;
        // 0x323b10: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b0c) {
            ctx->pc = 0x323B1Cu;
            goto label_323b1c;
        }
    }
    ctx->pc = 0x323B14u;
    // 0x323b14: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x323B14u;
    SET_GPR_U32(ctx, 31, 0x323B1Cu);
    ctx->pc = 0x323B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B14u;
    // 0x323b18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x323B14u, 0x323B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B1Cu;
label_323b1c:
    // 0x323b1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x323b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323b20:
    // 0x323b20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323b28: 0x3e00008  jr          $ra
    ctx->pc = 0x323B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B28u;
        // 0x323b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323B30u;
}
