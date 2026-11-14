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

// Function: sub_001AD8B0
// Address: 0x1ad8b0 - 0x1adc20
void sub_001AD8B0_0x1ad8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD8B0_0x1ad8b0");
#endif

    switch (ctx->pc) {
        case 0x1ad934u: goto label_1ad934;
        case 0x1ad964u: goto label_1ad964;
        case 0x1ad9b4u: goto label_1ad9b4;
        case 0x1ad9e8u: goto label_1ad9e8;
        case 0x1ada48u: goto label_1ada48;
        case 0x1ada7cu: goto label_1ada7c;
        case 0x1adadcu: goto label_1adadc;
        case 0x1adb10u: goto label_1adb10;
        case 0x1adb30u: goto label_1adb30;
        case 0x1adb40u: goto label_1adb40;
        case 0x1adb74u: goto label_1adb74;
        case 0x1adba8u: goto label_1adba8;
        case 0x1adbb8u: goto label_1adbb8;
        case 0x1adbd8u: goto label_1adbd8;
        case 0x1adc08u: goto label_1adc08;
        default: break;
    }

    ctx->pc = 0x1ad8b0u;

    // 0x1ad8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ad8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad8b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ad8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ad8b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ad8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ad8bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad8c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ad8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ad8c4: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1ad8c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ad8c8: 0x102000b2  beqz        $at, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1AD8C8u;
    {
        const bool branch_taken_0x1ad8c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8c8) {
            ctx->pc = 0x1ADB94u;
            goto label_1adb94;
        }
    }
    ctx->pc = 0x1AD8D0u;
    // 0x1ad8d0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ad8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ad8d4: 0x24638700  addiu       $v1, $v1, -0x7900
    ctx->pc = 0x1ad8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
    // 0x1ad8d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad8dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad8e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ad8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad8e4: 0x400008  jr          $v0
    ctx->pc = 0x1AD8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD8ECu: goto label_1ad8ec;
            case 0x1AD96Cu: goto label_1ad96c;
            case 0x1AD9F0u: goto label_1ad9f0;
            case 0x1ADA84u: goto label_1ada84;
            case 0x1ADB94u: goto label_1adb94;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD8E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AD8ECu;
label_1ad8ec:
    // 0x1ad8ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad8f0: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1ad8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1ad8f4: 0x144000a7  bnez        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1AD8F4u;
    {
        const bool branch_taken_0x1ad8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8f4) {
            ctx->pc = 0x1ADB94u;
            goto label_1adb94;
        }
    }
    ctx->pc = 0x1AD8FCu;
    // 0x1ad8fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ad8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad900: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1ad900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1ad904: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1ad904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad908: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x1ad908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
    // 0x1ad90c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ad90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ad910: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD910u;
    {
        const bool branch_taken_0x1ad910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad910) {
            ctx->pc = 0x1AD924u;
            goto label_1ad924;
        }
    }
    ctx->pc = 0x1AD918u;
    // 0x1ad918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad91c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad920: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x1ad920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
label_1ad924:
    // 0x1ad924: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad928: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ad928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ad92c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1AD92Cu;
    SET_GPR_U32(ctx, 31, 0x1AD934u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1AD92Cu, 0x1AD934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD934u;
label_1ad934:
    // 0x1ad934: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ad934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad938: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1ad938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1ad93c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1ad93cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ad940: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ad940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad944: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ad944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ad948: 0x8c650138  lw          $a1, 0x138($v1)
    ctx->pc = 0x1ad948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1ad94c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad950: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1ad950u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1ad954: 0x24c66c48  addiu       $a2, $a2, 0x6C48
    ctx->pc = 0x1ad954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27720));
    // 0x1ad958: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ad958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad95c: 0xc08c800  jal         func_232000
    ctx->pc = 0x1AD95Cu;
    SET_GPR_U32(ctx, 31, 0x1AD964u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1AD95Cu, 0x1AD964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD964u;
label_1ad964:
    // 0x1ad964: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1AD964u;
    {
        const bool branch_taken_0x1ad964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad964) {
            ctx->pc = 0x1ADB94u;
            goto label_1adb94;
        }
    }
    ctx->pc = 0x1AD96Cu;
label_1ad96c:
    // 0x1ad96c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad970: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1ad970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1ad974: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x1AD974u;
    {
        const bool branch_taken_0x1ad974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad974) {
            ctx->pc = 0x1ADB94u;
            goto label_1adb94;
        }
    }
    ctx->pc = 0x1AD97Cu;
    // 0x1ad97c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ad97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad980: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1ad980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1ad984: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1ad984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad988: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x1ad988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
    // 0x1ad98c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ad98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad990: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD990u;
    {
        const bool branch_taken_0x1ad990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad990) {
            ctx->pc = 0x1AD9A4u;
            goto label_1ad9a4;
        }
    }
    ctx->pc = 0x1AD998u;
    // 0x1ad998: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad99c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad9a0: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x1ad9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
label_1ad9a4:
    // 0x1ad9a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad9a8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ad9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ad9ac: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1AD9ACu;
    SET_GPR_U32(ctx, 31, 0x1AD9B4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1AD9ACu, 0x1AD9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9B4u;
label_1ad9b4:
    // 0x1ad9b4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ad9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad9b8: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1ad9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1ad9bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ad9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ad9c0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1ad9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ad9c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ad9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad9c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ad9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ad9cc: 0x8c650138  lw          $a1, 0x138($v1)
    ctx->pc = 0x1ad9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1ad9d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9d4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1ad9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1ad9d8: 0x24c66c48  addiu       $a2, $a2, 0x6C48
    ctx->pc = 0x1ad9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27720));
    // 0x1ad9dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ad9dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9e0: 0xc08c800  jal         func_232000
    ctx->pc = 0x1AD9E0u;
    SET_GPR_U32(ctx, 31, 0x1AD9E8u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1AD9E0u, 0x1AD9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9E8u;
label_1ad9e8:
    // 0x1ad9e8: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1AD9E8u;
    {
        const bool branch_taken_0x1ad9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad9e8) {
            ctx->pc = 0x1ADB94u;
            goto label_1adb94;
        }
    }
    ctx->pc = 0x1AD9F0u;
label_1ad9f0:
    // 0x1ad9f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ad9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad9f4: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1ad9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1ad9f8: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1AD9F8u;
    {
        const bool branch_taken_0x1ad9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad9f8) {
            ctx->pc = 0x1ADB94u;
            goto label_1adb94;
        }
    }
    ctx->pc = 0x1ADA00u;
    // 0x1ada00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ada00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ada04: 0x904200dc  lbu         $v0, 0xDC($v0)
    ctx->pc = 0x1ada04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x1ada08: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1ADA08u;
    {
        const bool branch_taken_0x1ada08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ada08) {
            ctx->pc = 0x1ADB94u;
            goto label_1adb94;
        }
    }
    ctx->pc = 0x1ADA10u;
    // 0x1ada10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ada10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ada14: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1ada14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1ada18: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1ada18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ada1c: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x1ada1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
    // 0x1ada20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ada20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ada24: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADA24u;
    {
        const bool branch_taken_0x1ada24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ada24) {
            ctx->pc = 0x1ADA38u;
            goto label_1ada38;
        }
    }
    ctx->pc = 0x1ADA2Cu;
    // 0x1ada2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ada2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ada30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ada30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ada34: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x1ada34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
label_1ada38:
    // 0x1ada38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ada38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ada3c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ada3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ada40: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1ADA40u;
    SET_GPR_U32(ctx, 31, 0x1ADA48u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1ADA40u, 0x1ADA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA48u;
label_1ada48:
    // 0x1ada48: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ada48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ada4c: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1ada4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1ada50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ada50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ada54: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1ada54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ada58: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ada58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ada5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ada5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ada60: 0x8c650138  lw          $a1, 0x138($v1)
    ctx->pc = 0x1ada60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1ada64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ada64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada68: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1ada68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1ada6c: 0x24c66c48  addiu       $a2, $a2, 0x6C48
    ctx->pc = 0x1ada6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27720));
    // 0x1ada70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ada70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada74: 0xc08c800  jal         func_232000
    ctx->pc = 0x1ADA74u;
    SET_GPR_U32(ctx, 31, 0x1ADA7Cu);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1ADA74u, 0x1ADA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA7Cu;
label_1ada7c:
    // 0x1ada7c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1ADA7Cu;
    {
        const bool branch_taken_0x1ada7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ada7c) {
            ctx->pc = 0x1ADB94u;
            goto label_1adb94;
        }
    }
    ctx->pc = 0x1ADA84u;
label_1ada84:
    // 0x1ada84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ada84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ada88: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1ada88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1ada8c: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1ADA8Cu;
    {
        const bool branch_taken_0x1ada8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ada8c) {
            ctx->pc = 0x1ADB94u;
            goto label_1adb94;
        }
    }
    ctx->pc = 0x1ADA94u;
    // 0x1ada94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ada94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ada98: 0x904200dc  lbu         $v0, 0xDC($v0)
    ctx->pc = 0x1ada98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x1ada9c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1ADA9Cu;
    {
        const bool branch_taken_0x1ada9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ada9c) {
            ctx->pc = 0x1ADB18u;
            goto label_1adb18;
        }
    }
    ctx->pc = 0x1ADAA4u;
    // 0x1adaa4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1adaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adaa8: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1adaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1adaac: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1adaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1adab0: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x1adab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
    // 0x1adab4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1adab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1adab8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADAB8u;
    {
        const bool branch_taken_0x1adab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1adab8) {
            ctx->pc = 0x1ADACCu;
            goto label_1adacc;
        }
    }
    ctx->pc = 0x1ADAC0u;
    // 0x1adac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1adac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adac4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adac8: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x1adac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
label_1adacc:
    // 0x1adacc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adad0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1adad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1adad4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1ADAD4u;
    SET_GPR_U32(ctx, 31, 0x1ADADCu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1ADAD4u, 0x1ADADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADADCu;
label_1adadc:
    // 0x1adadc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1adadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adae0: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1adae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1adae4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1adae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1adae8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1adae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1adaec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1adaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adaf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1adaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1adaf4: 0x8c650138  lw          $a1, 0x138($v1)
    ctx->pc = 0x1adaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1adaf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1adaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adafc: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1adafcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1adb00: 0x24c66c48  addiu       $a2, $a2, 0x6C48
    ctx->pc = 0x1adb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27720));
    // 0x1adb04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1adb04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb08: 0xc08c800  jal         func_232000
    ctx->pc = 0x1ADB08u;
    SET_GPR_U32(ctx, 31, 0x1ADB10u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1ADB08u, 0x1ADB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB10u;
label_1adb10:
    // 0x1adb10: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1ADB10u;
    {
        const bool branch_taken_0x1adb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adb10) {
            ctx->pc = 0x1ADB94u;
            goto label_1adb94;
        }
    }
    ctx->pc = 0x1ADB18u;
label_1adb18:
    // 0x1adb18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adb1c: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1adb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1adb20: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1ADB20u;
    {
        const bool branch_taken_0x1adb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adb20) {
            ctx->pc = 0x1ADB8Cu;
            goto label_1adb8c;
        }
    }
    ctx->pc = 0x1ADB28u;
    // 0x1adb28: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1ADB28u;
    {
        const bool branch_taken_0x1adb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adb28) {
            ctx->pc = 0x1ADB74u;
            goto label_1adb74;
        }
    }
    ctx->pc = 0x1ADB30u;
label_1adb30:
    // 0x1adb30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adb34: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1adb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1adb38: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1ADB38u;
    SET_GPR_U32(ctx, 31, 0x1ADB40u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1ADB38u, 0x1ADB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB40u;
label_1adb40:
    // 0x1adb40: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1adb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adb44: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1adb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1adb48: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1adb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1adb4c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1adb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1adb50: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1adb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adb54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1adb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1adb58: 0x8c650138  lw          $a1, 0x138($v1)
    ctx->pc = 0x1adb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1adb5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1adb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb60: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1adb60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1adb64: 0x24c66c58  addiu       $a2, $a2, 0x6C58
    ctx->pc = 0x1adb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27736));
    // 0x1adb68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1adb68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb6c: 0xc08c800  jal         func_232000
    ctx->pc = 0x1ADB6Cu;
    SET_GPR_U32(ctx, 31, 0x1ADB74u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1ADB6Cu, 0x1ADB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB74u;
label_1adb74:
    // 0x1adb74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1adb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adb78: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x1adb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1adb7c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1adb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1adb80: 0xac8200f0  sw          $v0, 0xF0($a0)
    ctx->pc = 0x1adb80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
    // 0x1adb84: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1ADB84u;
    {
        const bool branch_taken_0x1adb84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adb84) {
            ctx->pc = 0x1ADB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adb30;
        }
    }
    ctx->pc = 0x1ADB8Cu;
label_1adb8c:
    // 0x1adb8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adb90: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x1adb90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
label_1adb94:
    // 0x1adb94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adb98: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1adb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adb9c: 0xc44c0158  lwc1        $f12, 0x158($v0)
    ctx->pc = 0x1adb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1adba0: 0xc064d10  jal         func_193440
    ctx->pc = 0x1ADBA0u;
    SET_GPR_U32(ctx, 31, 0x1ADBA8u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1ADBA0u, 0x1ADBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADBA8u;
label_1adba8:
    // 0x1adba8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1adba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adbac: 0x27859470  addiu       $a1, $gp, -0x6B90
    ctx->pc = 0x1adbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939760));
    // 0x1adbb0: 0xc064d48  jal         func_193520
    ctx->pc = 0x1ADBB0u;
    SET_GPR_U32(ctx, 31, 0x1ADBB8u);
    ctx->pc = 0x193520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193520u, 0x1ADBB0u, 0x1ADBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADBB8u;
label_1adbb8:
    // 0x1adbb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1adbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1adbbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1adbbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1adbc0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1adbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1adbc4: 0x27859478  addiu       $a1, $gp, -0x6B88
    ctx->pc = 0x1adbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939768));
    // 0x1adbc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1adbc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adbcc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1adbccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1adbd0: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1ADBD0u;
    SET_GPR_U32(ctx, 31, 0x1ADBD8u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1ADBD0u, 0x1ADBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADBD8u;
label_1adbd8:
    // 0x1adbd8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1adbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adbdc: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x1adbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1adbe0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ADBE0u;
    {
        const bool branch_taken_0x1adbe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adbe0) {
            ctx->pc = 0x1ADC10u;
            goto label_1adc10;
        }
    }
    ctx->pc = 0x1ADBE8u;
    // 0x1adbe8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1adbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1adbec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1adbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1adbf0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1adbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1adbf4: 0x27859468  addiu       $a1, $gp, -0x6B98
    ctx->pc = 0x1adbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939752));
    // 0x1adbf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1adbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adbfc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1adbfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1adc00: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1ADC00u;
    SET_GPR_U32(ctx, 31, 0x1ADC08u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1ADC00u, 0x1ADC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC08u;
label_1adc08:
    // 0x1adc08: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1adc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adc0c: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1adc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1adc10:
    // 0x1adc10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1adc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adc14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1adc14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1adc18: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADC20u;
}
