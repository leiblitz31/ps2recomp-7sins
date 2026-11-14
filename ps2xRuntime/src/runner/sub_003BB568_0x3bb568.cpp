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

// Function: sub_003BB568
// Address: 0x3bb568 - 0x3bb5e0
void sub_003BB568_0x3bb568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB568_0x3bb568");
#endif

    switch (ctx->pc) {
        case 0x3bb598u: goto label_3bb598;
        case 0x3bb5c8u: goto label_3bb5c8;
        default: break;
    }

    ctx->pc = 0x3bb568u;

    // 0x3bb568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bb56c: 0x8f85ab5c  lw          $a1, -0x54A4($gp)
    ctx->pc = 0x3bb56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945628)));
    // 0x3bb570: 0x8f87ab60  lw          $a3, -0x54A0($gp)
    ctx->pc = 0x3bb570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945632)));
    // 0x3bb574: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x3bb574u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x3bb578: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x3bb578u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x3bb57c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bb57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bb580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bb580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bb584: 0x2508dc88  addiu       $t0, $t0, -0x2378
    ctx->pc = 0x3bb584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958216));
    // 0x3bb588: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3bb588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3bb58c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bb58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bb590: 0xc10408c  jal         func_410230
    ctx->pc = 0x3BB590u;
    SET_GPR_U32(ctx, 31, 0x3BB598u);
    ctx->pc = 0x3BB594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB590u;
    // 0x3bb594: 0x35290190  ori         $t1, $t1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x3BB590u, 0x3BB598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB598u;
label_3bb598:
    // 0x3bb598: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3bb598u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x3bb59c: 0x8f85ab54  lw          $a1, -0x54AC($gp)
    ctx->pc = 0x3bb59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945620)));
    // 0x3bb5a0: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x3bb5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
    // 0x3bb5a4: 0x8f87ab58  lw          $a3, -0x54A8($gp)
    ctx->pc = 0x3bb5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945624)));
    // 0x3bb5a8: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x3bb5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x3bb5ac: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x3bb5acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x3bb5b0: 0xae020534  sw          $v0, 0x534($s0)
    ctx->pc = 0x3bb5b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61D3B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D3B4u, _value); } while (0);
    // 0x3bb5b4: 0x2508dc60  addiu       $t0, $t0, -0x23A0
    ctx->pc = 0x3bb5b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958176));
    // 0x3bb5b8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3bb5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3bb5bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bb5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bb5c0: 0xc10408c  jal         func_410230
    ctx->pc = 0x3BB5C0u;
    SET_GPR_U32(ctx, 31, 0x3BB5C8u);
    ctx->pc = 0x3BB5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB5C0u;
    // 0x3bb5c4: 0x35290190  ori         $t1, $t1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x3BB5C0u, 0x3BB5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB5C8u;
label_3bb5c8:
    // 0x3bb5c8: 0xae020538  sw          $v0, 0x538($s0)
    ctx->pc = 0x3bb5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1336), GPR_U32(ctx, 2));
    // 0x3bb5cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bb5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bb5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bb5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB5D8u;
        // 0x3bb5dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB5E0u;
}
