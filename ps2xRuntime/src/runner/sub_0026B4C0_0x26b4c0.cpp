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

// Function: sub_0026B4C0
// Address: 0x26b4c0 - 0x26b5f0
void sub_0026B4C0_0x26b4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B4C0_0x26b4c0");
#endif

    switch (ctx->pc) {
        case 0x26b520u: goto label_26b520;
        case 0x26b544u: goto label_26b544;
        case 0x26b568u: goto label_26b568;
        case 0x26b58cu: goto label_26b58c;
        case 0x26b5b0u: goto label_26b5b0;
        case 0x26b5d4u: goto label_26b5d4;
        default: break;
    }

    ctx->pc = 0x26b4c0u;

    // 0x26b4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26b4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26b4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b4c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26b4cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x26b4d0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x26b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x26b4d4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x26b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x26b4d8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x26b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b4dc: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x26b4dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x26b4e0: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x26B4E0u;
    {
        const bool branch_taken_0x26b4e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b4e0) {
            ctx->pc = 0x26B5D4u;
            goto label_26b5d4;
        }
    }
    ctx->pc = 0x26B4E8u;
    // 0x26b4e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x26b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x26b4ec: 0x24848a80  addiu       $a0, $a0, -0x7580
    ctx->pc = 0x26b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937216));
    // 0x26b4f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26b4f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26b4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26b4f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b4fc: 0x600008  jr          $v1
    ctx->pc = 0x26B4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B504u: goto label_26b504;
            case 0x26B528u: goto label_26b528;
            case 0x26B54Cu: goto label_26b54c;
            case 0x26B570u: goto label_26b570;
            case 0x26B594u: goto label_26b594;
            case 0x26B5B8u: goto label_26b5b8;
            case 0x26B5D4u: goto label_26b5d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B4FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26B504u;
label_26b504:
    // 0x26b504: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b508: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26b508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b50c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x26b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b510: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x26b510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26b514: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x26b514u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b518: 0xc09b284  jal         func_26CA10
    ctx->pc = 0x26B518u;
    SET_GPR_U32(ctx, 31, 0x26B520u);
    ctx->pc = 0x26CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CA10u, 0x26B518u, 0x26B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B520u;
label_26b520:
    // 0x26b520: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x26B520u;
    {
        const bool branch_taken_0x26b520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b520) {
            ctx->pc = 0x26B5D4u;
            goto label_26b5d4;
        }
    }
    ctx->pc = 0x26B528u;
label_26b528:
    // 0x26b528: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b52c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b530: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x26b530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b534: 0x24460034  addiu       $a2, $v0, 0x34
    ctx->pc = 0x26b534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26b538: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x26b538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b53c: 0xc09b284  jal         func_26CA10
    ctx->pc = 0x26B53Cu;
    SET_GPR_U32(ctx, 31, 0x26B544u);
    ctx->pc = 0x26CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CA10u, 0x26B53Cu, 0x26B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B544u;
label_26b544:
    // 0x26b544: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26B544u;
    {
        const bool branch_taken_0x26b544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b544) {
            ctx->pc = 0x26B5D4u;
            goto label_26b5d4;
        }
    }
    ctx->pc = 0x26B54Cu;
label_26b54c:
    // 0x26b54c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b550: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26b550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b554: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x26b554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b558: 0x24460088  addiu       $a2, $v0, 0x88
    ctx->pc = 0x26b558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26b55c: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x26b55cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b560: 0xc09b284  jal         func_26CA10
    ctx->pc = 0x26B560u;
    SET_GPR_U32(ctx, 31, 0x26B568u);
    ctx->pc = 0x26CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CA10u, 0x26B560u, 0x26B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B568u;
label_26b568:
    // 0x26b568: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x26B568u;
    {
        const bool branch_taken_0x26b568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b568) {
            ctx->pc = 0x26B5D4u;
            goto label_26b5d4;
        }
    }
    ctx->pc = 0x26B570u;
label_26b570:
    // 0x26b570: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b574: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26b574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b578: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x26b578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b57c: 0x24460094  addiu       $a2, $v0, 0x94
    ctx->pc = 0x26b57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26b580: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x26b580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b584: 0xc09b284  jal         func_26CA10
    ctx->pc = 0x26B584u;
    SET_GPR_U32(ctx, 31, 0x26B58Cu);
    ctx->pc = 0x26CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CA10u, 0x26B584u, 0x26B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B58Cu;
label_26b58c:
    // 0x26b58c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26B58Cu;
    {
        const bool branch_taken_0x26b58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b58c) {
            ctx->pc = 0x26B5D4u;
            goto label_26b5d4;
        }
    }
    ctx->pc = 0x26B594u;
label_26b594:
    // 0x26b594: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b598: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26b598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b59c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x26b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b5a0: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x26b5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x26b5a4: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x26b5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b5a8: 0xc09b284  jal         func_26CA10
    ctx->pc = 0x26B5A8u;
    SET_GPR_U32(ctx, 31, 0x26B5B0u);
    ctx->pc = 0x26CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CA10u, 0x26B5A8u, 0x26B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B5B0u;
label_26b5b0:
    // 0x26b5b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26B5B0u;
    {
        const bool branch_taken_0x26b5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b5b0) {
            ctx->pc = 0x26B5D4u;
            goto label_26b5d4;
        }
    }
    ctx->pc = 0x26B5B8u;
label_26b5b8:
    // 0x26b5b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b5bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b5c0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x26b5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b5c4: 0x244600b8  addiu       $a2, $v0, 0xB8
    ctx->pc = 0x26b5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x26b5c8: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x26b5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b5cc: 0xc09b284  jal         func_26CA10
    ctx->pc = 0x26B5CCu;
    SET_GPR_U32(ctx, 31, 0x26B5D4u);
    ctx->pc = 0x26CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CA10u, 0x26B5CCu, 0x26B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B5D4u;
label_26b5d4:
    // 0x26b5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b5d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x26b5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26b5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x26B5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B5E4u;
    // 0x26b5e4: 0x0  nop
    ctx->pc = 0x26b5e4u;
    // NOP
    // 0x26b5e8: 0x0  nop
    ctx->pc = 0x26b5e8u;
    // NOP
    // 0x26b5ec: 0x0  nop
    ctx->pc = 0x26b5ecu;
    // NOP
    ctx->pc = 0x26b5f0u;
}
