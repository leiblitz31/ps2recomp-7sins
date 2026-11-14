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

// Function: sub_002DFFD0
// Address: 0x2dffd0 - 0x2e00e0
void sub_002DFFD0_0x2dffd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFFD0_0x2dffd0");
#endif

    switch (ctx->pc) {
        case 0x2e0004u: goto label_2e0004;
        case 0x2e0018u: goto label_2e0018;
        case 0x2e003cu: goto label_2e003c;
        case 0x2e0058u: goto label_2e0058;
        case 0x2e0070u: goto label_2e0070;
        case 0x2e0098u: goto label_2e0098;
        case 0x2e00a8u: goto label_2e00a8;
        case 0x2e00c4u: goto label_2e00c4;
        default: break;
    }

    ctx->pc = 0x2dffd0u;

    // 0x2dffd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2dffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2dffd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dffd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dffd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dffd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dffdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dffe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dffe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dffe4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2dffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2dffe8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2dffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2dffec: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2dffecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2dfff0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2dfff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2dfff4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2dfff4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2dfff8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2dfff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dfffc: 0xc0b8088  jal         func_2E0220
    ctx->pc = 0x2DFFFCu;
    SET_GPR_U32(ctx, 31, 0x2E0004u);
    ctx->pc = 0x2E0220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0220u, 0x2DFFFCu, 0x2E0004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0004u;
label_2e0004:
    // 0x2e0004: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2e0004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2e0008: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2e0008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2e000c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2e000cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e0010: 0xc041954  jal         func_106550
    ctx->pc = 0x2E0010u;
    SET_GPR_U32(ctx, 31, 0x2E0018u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2E0010u, 0x2E0018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0018u;
label_2e0018:
    // 0x2e0018: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2e0018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2e001c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e001cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0020: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2e0020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e0024: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e0024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0028: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2e0028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e002c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e002cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0034: 0xc0b8a74  jal         func_2E29D0
    ctx->pc = 0x2E0034u;
    SET_GPR_U32(ctx, 31, 0x2E003Cu);
    ctx->pc = 0x2E29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E29D0u, 0x2E0034u, 0x2E003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E003Cu;
label_2e003c:
    // 0x2e003c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e003cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0040: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e0040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0044: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e0044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0048: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2e0048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e004c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e004cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0050: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2E0050u;
    SET_GPR_U32(ctx, 31, 0x2E0058u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2E0050u, 0x2E0058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0058u;
label_2e0058:
    // 0x2e0058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e005c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0060: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2e0060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e0064: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2e0064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e0068: 0xc0b806c  jal         func_2E01B0
    ctx->pc = 0x2E0068u;
    SET_GPR_U32(ctx, 31, 0x2E0070u);
    ctx->pc = 0x2E01B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E01B0u, 0x2E0068u, 0x2E0070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0070u;
label_2e0070:
    // 0x2e0070: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0074: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2e0074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e0078: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0078u;
    {
        const bool branch_taken_0x2e0078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0078) {
            ctx->pc = 0x2E009Cu;
            goto label_2e009c;
        }
    }
    ctx->pc = 0x2E0080u;
    // 0x2e0080: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e0080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0084: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e0084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0088: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2e0088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e008c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e008cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0090: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2E0090u;
    SET_GPR_U32(ctx, 31, 0x2E0098u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2E0090u, 0x2E0098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0098u;
label_2e0098:
    // 0x2e0098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e009c:
    // 0x2e009c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2e009cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e00a0: 0xc0b804c  jal         func_2E0130
    ctx->pc = 0x2E00A0u;
    SET_GPR_U32(ctx, 31, 0x2E00A8u);
    ctx->pc = 0x2E0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0130u, 0x2E00A0u, 0x2E00A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E00A8u;
label_2e00a8:
    // 0x2e00a8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2e00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2e00ac: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2e00acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e00b0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2e00b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e00b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e00b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e00b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00bc: 0xc0b8038  jal         func_2E00E0
    ctx->pc = 0x2E00BCu;
    SET_GPR_U32(ctx, 31, 0x2E00C4u);
    ctx->pc = 0x2E00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E00E0u, 0x2E00BCu, 0x2E00C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E00C4u;
label_2e00c4:
    // 0x2e00c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e00c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e00c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e00c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e00cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e00ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e00d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e00d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e00d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2e00d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e00d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E00D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E00D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E00E0u;
}
