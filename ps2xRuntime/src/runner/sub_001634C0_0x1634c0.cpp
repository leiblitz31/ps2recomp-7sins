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

// Function: sub_001634C0
// Address: 0x1634c0 - 0x1635b0
void sub_001634C0_0x1634c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001634C0_0x1634c0");
#endif

    switch (ctx->pc) {
        case 0x163500u: goto label_163500;
        case 0x163514u: goto label_163514;
        case 0x163528u: goto label_163528;
        case 0x16353cu: goto label_16353c;
        case 0x163550u: goto label_163550;
        case 0x163564u: goto label_163564;
        case 0x163574u: goto label_163574;
        case 0x163594u: goto label_163594;
        default: break;
    }

    ctx->pc = 0x1634c0u;

    // 0x1634c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1634c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1634c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1634c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1634c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1634c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1634cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1634ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1634d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1634d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1634d4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1634D4u;
    {
        const bool branch_taken_0x1634d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1634d4) {
            ctx->pc = 0x163594u;
            goto label_163594;
        }
    }
    ctx->pc = 0x1634DCu;
    // 0x1634dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1634dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1634e0: 0x24633ab0  addiu       $v1, $v1, 0x3AB0
    ctx->pc = 0x1634e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15024));
    // 0x1634e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1634e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1634e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1634e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1634ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1634ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1634f0: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x1634f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1634f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1634f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1634f8: 0xc056094  jal         func_158250
    ctx->pc = 0x1634F8u;
    SET_GPR_U32(ctx, 31, 0x163500u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1634F8u, 0x163500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163500u;
label_163500:
    // 0x163500: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163504: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x163504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x163508: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x163508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16350c: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x16350Cu;
    SET_GPR_U32(ctx, 31, 0x163514u);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x16350Cu, 0x163514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163514u;
label_163514:
    // 0x163514: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163518: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x163518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x16351c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16351cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x163520: 0xc056094  jal         func_158250
    ctx->pc = 0x163520u;
    SET_GPR_U32(ctx, 31, 0x163528u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x163520u, 0x163528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163528u;
label_163528:
    // 0x163528: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16352c: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x16352cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x163530: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x163530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x163534: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x163534u;
    SET_GPR_U32(ctx, 31, 0x16353Cu);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x163534u, 0x16353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16353Cu;
label_16353c:
    // 0x16353c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163540: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x163540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x163544: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x163544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x163548: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x163548u;
    SET_GPR_U32(ctx, 31, 0x163550u);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x163548u, 0x163550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163550u;
label_163550:
    // 0x163550: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163554: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x163554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x163558: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x163558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16355c: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x16355Cu;
    SET_GPR_U32(ctx, 31, 0x163564u);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x16355Cu, 0x163564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163564u;
label_163564:
    // 0x163564: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x163564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x163568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16356c: 0xc055950  jal         func_156540
    ctx->pc = 0x16356Cu;
    SET_GPR_U32(ctx, 31, 0x163574u);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x16356Cu, 0x163574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163574u;
label_163574:
    // 0x163574: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x163574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163578: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x163578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16357c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16357cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x163580: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163580u;
    {
        const bool branch_taken_0x163580 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x163580) {
            ctx->pc = 0x163594u;
            goto label_163594;
        }
    }
    ctx->pc = 0x163588u;
    // 0x163588: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x163588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16358c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x16358Cu;
    SET_GPR_U32(ctx, 31, 0x163594u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x16358Cu, 0x163594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163594u;
label_163594:
    // 0x163594: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x163594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16359c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16359cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1635a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1635A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1635A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1635A8u;
    // 0x1635a8: 0x0  nop
    ctx->pc = 0x1635a8u;
    // NOP
    // 0x1635ac: 0x0  nop
    ctx->pc = 0x1635acu;
    // NOP
    ctx->pc = 0x1635b0u;
}
