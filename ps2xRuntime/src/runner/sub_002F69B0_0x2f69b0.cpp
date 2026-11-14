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

// Function: sub_002F69B0
// Address: 0x2f69b0 - 0x2f6a28
void sub_002F69B0_0x2f69b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F69B0_0x2f69b0");
#endif

    switch (ctx->pc) {
        case 0x2f69d4u: goto label_2f69d4;
        case 0x2f69f0u: goto label_2f69f0;
        case 0x2f6a00u: goto label_2f6a00;
        default: break;
    }

    ctx->pc = 0x2f69b0u;

    // 0x2f69b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f69b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f69b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f69b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f69b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f69b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f69bc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f69bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f69c0: 0x3c11004f  lui         $s1, 0x4F
    ctx->pc = 0x2f69c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
    // 0x2f69c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f69c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f69c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f69c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f69cc: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2F69CCu;
    SET_GPR_U32(ctx, 31, 0x2F69D4u);
    ctx->pc = 0x2F69D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F69CCu;
    // 0x2f69d0: 0xae32ef24  sw          $s2, -0x10DC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962980), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2F69CCu, 0x2F69D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F69D4u;
label_2f69d4:
    // 0x2f69d4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2f69d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2f69d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2f69d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2f69dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f69dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f69e0: 0x24a56958  addiu       $a1, $a1, 0x6958
    ctx->pc = 0x2f69e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26968));
    // 0x2f69e4: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x2f69e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    // 0x2f69e8: 0xc0c032a  jal         func_300CA8
    ctx->pc = 0x2F69E8u;
    SET_GPR_U32(ctx, 31, 0x2F69F0u);
    ctx->pc = 0x2F69ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F69E8u;
    // 0x2f69ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300CA8u, 0x2F69E8u, 0x2F69F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F69F0u;
label_2f69f0:
    // 0x2f69f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F69F0u;
    {
        const bool branch_taken_0x2f69f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69F0u;
        // 0x2f69f4: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69f0) {
            ctx->pc = 0x2F6A04u;
            goto label_2f6a04;
        }
    }
    ctx->pc = 0x2F69F8u;
    // 0x2f69f8: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x2F69F8u;
    SET_GPR_U32(ctx, 31, 0x2F6A00u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x2F69F8u, 0x2F6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A00u;
label_2f6a00:
    // 0x2f6a00: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f6a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2f6a04:
    // 0x2f6a04: 0xae20ef24  sw          $zero, -0x10DC($s1)
    ctx->pc = 0x2f6a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962980), GPR_U32(ctx, 0));
    // 0x2f6a08: 0xac52ef48  sw          $s2, -0x10B8($v0)
    ctx->pc = 0x2f6a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963016), GPR_U32(ctx, 18));
    // 0x2f6a0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f6a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6a10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6a14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f6a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6a18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f6a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6a1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6a20: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A20u;
        // 0x2f6a24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6A28u;
}
