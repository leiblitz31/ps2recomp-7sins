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

// Function: sub_00156540
// Address: 0x156540 - 0x1565d0
void sub_00156540_0x156540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156540_0x156540");
#endif

    switch (ctx->pc) {
        case 0x156580u: goto label_156580;
        case 0x156590u: goto label_156590;
        case 0x1565b0u: goto label_1565b0;
        default: break;
    }

    ctx->pc = 0x156540u;

    // 0x156540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x156548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15654c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15654cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x156550: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x156550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156554: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x156554u;
    {
        const bool branch_taken_0x156554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156554) {
            ctx->pc = 0x1565B0u;
            goto label_1565b0;
        }
    }
    ctx->pc = 0x15655Cu;
    // 0x15655c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x15655cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x156560: 0x246339f0  addiu       $v1, $v1, 0x39F0
    ctx->pc = 0x156560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14832));
    // 0x156564: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x156564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156568: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x156568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15656c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156570: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x156570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x156574: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x156574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156578: 0xc05580c  jal         func_156030
    ctx->pc = 0x156578u;
    SET_GPR_U32(ctx, 31, 0x156580u);
    ctx->pc = 0x156030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156030u, 0x156578u, 0x156580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156580u;
label_156580:
    // 0x156580: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x156580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156588: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x156588u;
    SET_GPR_U32(ctx, 31, 0x156590u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x156588u, 0x156590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156590u;
label_156590:
    // 0x156590: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x156590u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156594: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x156594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x156598: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x156598u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15659c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15659Cu;
    {
        const bool branch_taken_0x15659c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15659c) {
            ctx->pc = 0x1565B0u;
            goto label_1565b0;
        }
    }
    ctx->pc = 0x1565A4u;
    // 0x1565a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1565a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1565a8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1565A8u;
    SET_GPR_U32(ctx, 31, 0x1565B0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1565A8u, 0x1565B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1565B0u;
label_1565b0:
    // 0x1565b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1565b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1565b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1565b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1565b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1565b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1565bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1565BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1565BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1565C4u;
    // 0x1565c4: 0x0  nop
    ctx->pc = 0x1565c4u;
    // NOP
    // 0x1565c8: 0x0  nop
    ctx->pc = 0x1565c8u;
    // NOP
    // 0x1565cc: 0x0  nop
    ctx->pc = 0x1565ccu;
    // NOP
    ctx->pc = 0x1565d0u;
}
