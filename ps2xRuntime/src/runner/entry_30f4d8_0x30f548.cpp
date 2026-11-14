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

// Function: entry_30f4d8
// Address: 0x30f4d8 - 0x30f548
void entry_30f4d8_0x30f548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_30f4d8_0x30f548");
#endif

    switch (ctx->pc) {
        case 0x30f51cu: goto label_30f51c;
        case 0x30f52cu: goto label_30f52c;
        default: break;
    }

    ctx->pc = 0x30f4d8u;

    // 0x30f4d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30f4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30f4dc: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x30f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x30f4e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x30f4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x30f4e4: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x30f4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x30f4e8: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x30f4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x30f4ec: 0x3c0b0031  lui         $t3, 0x31
    ctx->pc = 0x30f4ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)49 << 16));
    // 0x30f4f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30f4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30f4f4: 0x24846840  addiu       $a0, $a0, 0x6840
    ctx->pc = 0x30f4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26688));
    // 0x30f4f8: 0x24e768c0  addiu       $a3, $a3, 0x68C0
    ctx->pc = 0x30f4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26816));
    // 0x30f4fc: 0x256bea68  addiu       $t3, $t3, -0x1598
    ctx->pc = 0x30f4fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961768));
    // 0x30f500: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30f500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x30f504: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x30f504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x30f508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30f508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f50c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x30f50cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x30f510: 0x26097e00  addiu       $t1, $s0, 0x7E00
    ctx->pc = 0x30f510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 32256));
    // 0x30f514: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x30F514u;
    SET_GPR_U32(ctx, 31, 0x30F51Cu);
    ctx->pc = 0x30F518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F514u;
    // 0x30f518: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x30F514u, 0x30F51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F51Cu;
label_30f51c:
    // 0x30f51c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30F51Cu;
    {
        const bool branch_taken_0x30f51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F51Cu;
        // 0x30f520: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f51c) {
            ctx->pc = 0x30F534u;
            goto label_30f534;
        }
    }
    ctx->pc = 0x30F524u;
    // 0x30f524: 0xc0c0212  jal         func_300848
    ctx->pc = 0x30F524u;
    SET_GPR_U32(ctx, 31, 0x30F52Cu);
    ctx->pc = 0x30F528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F524u;
    // 0x30f528: 0x2484b608  addiu       $a0, $a0, -0x49F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x30F524u, 0x30F52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F52Cu;
label_30f52c:
    // 0x30f52c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30F52Cu;
    {
        const bool branch_taken_0x30f52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F52Cu;
        // 0x30f530: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f52c) {
            ctx->pc = 0x30F538u;
            goto label_30f538;
        }
    }
    ctx->pc = 0x30F534u;
label_30f534:
    // 0x30f534: 0x8e027e00  lw          $v0, 0x7E00($s0)
    ctx->pc = 0x30f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32256)));
label_30f538:
    // 0x30f538: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30f538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f53c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30f53cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f540: 0x3e00008  jr          $ra
    ctx->pc = 0x30F540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F540u;
        // 0x30f544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F548u;
}
