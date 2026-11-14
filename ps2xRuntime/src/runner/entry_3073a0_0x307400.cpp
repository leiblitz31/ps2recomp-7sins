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

// Function: entry_3073a0
// Address: 0x3073a0 - 0x307400
void entry_3073a0_0x307400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_3073a0_0x307400");
#endif

    switch (ctx->pc) {
        case 0x3073d0u: goto label_3073d0;
        case 0x3073dcu: goto label_3073dc;
        case 0x3073e8u: goto label_3073e8;
        default: break;
    }

    ctx->pc = 0x3073a0u;

    // 0x3073a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3073a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3073a4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3073a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3073a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3073a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3073ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3073acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3073b0: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x3073b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x3073b4: 0x261078c0  addiu       $s0, $s0, 0x78C0
    ctx->pc = 0x3073b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30912));
    // 0x3073b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3073b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3073bc: 0xac510f78  sw          $s1, 0xF78($v0)
    ctx->pc = 0x3073bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x4F0F78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F0F78u, _value); } while (0);
    // 0x3073c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3073c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3073c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3073c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3073c8: 0xc0bf604  jal         func_2FD810
    ctx->pc = 0x3073C8u;
    SET_GPR_U32(ctx, 31, 0x3073D0u);
    ctx->pc = 0x3073CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3073C8u;
    // 0x3073cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD810u, 0x3073C8u, 0x3073D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3073D0u;
label_3073d0:
    // 0x3073d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3073d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3073d4: 0xc0bf604  jal         func_2FD810
    ctx->pc = 0x3073D4u;
    SET_GPR_U32(ctx, 31, 0x3073DCu);
    ctx->pc = 0x3073D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3073D4u;
    // 0x3073d8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD810u, 0x3073D4u, 0x3073DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3073DCu;
label_3073dc:
    // 0x3073dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3073dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3073e0: 0xc0bf604  jal         func_2FD810
    ctx->pc = 0x3073E0u;
    SET_GPR_U32(ctx, 31, 0x3073E8u);
    ctx->pc = 0x3073E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3073E0u;
    // 0x3073e4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD810u, 0x3073E0u, 0x3073E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3073E8u;
label_3073e8:
    // 0x3073e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3073e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3073ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3073ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3073f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3073f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3073f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3073f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3073f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3073F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3073FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073F8u;
        // 0x3073fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3073F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307400u;
}
