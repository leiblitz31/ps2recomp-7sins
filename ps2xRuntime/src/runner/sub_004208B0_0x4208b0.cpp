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

// Function: sub_004208B0
// Address: 0x4208b0 - 0x420960
void sub_004208B0_0x4208b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004208B0_0x4208b0");
#endif

    switch (ctx->pc) {
        case 0x4208b0u: goto label_4208b0;
        case 0x4208b4u: goto label_4208b4;
        case 0x4208b8u: goto label_4208b8;
        case 0x4208bcu: goto label_4208bc;
        case 0x4208c0u: goto label_4208c0;
        case 0x4208c4u: goto label_4208c4;
        case 0x4208c8u: goto label_4208c8;
        case 0x4208ccu: goto label_4208cc;
        case 0x4208d0u: goto label_4208d0;
        case 0x4208d4u: goto label_4208d4;
        case 0x4208d8u: goto label_4208d8;
        case 0x4208dcu: goto label_4208dc;
        case 0x4208e0u: goto label_4208e0;
        case 0x4208e4u: goto label_4208e4;
        case 0x4208e8u: goto label_4208e8;
        case 0x4208ecu: goto label_4208ec;
        case 0x4208f0u: goto label_4208f0;
        case 0x4208f4u: goto label_4208f4;
        case 0x4208f8u: goto label_4208f8;
        case 0x4208fcu: goto label_4208fc;
        case 0x420900u: goto label_420900;
        case 0x420904u: goto label_420904;
        case 0x420908u: goto label_420908;
        case 0x42090cu: goto label_42090c;
        case 0x420910u: goto label_420910;
        case 0x420914u: goto label_420914;
        case 0x420918u: goto label_420918;
        case 0x42091cu: goto label_42091c;
        case 0x420920u: goto label_420920;
        case 0x420924u: goto label_420924;
        case 0x420928u: goto label_420928;
        case 0x42092cu: goto label_42092c;
        case 0x420930u: goto label_420930;
        case 0x420934u: goto label_420934;
        case 0x420938u: goto label_420938;
        case 0x42093cu: goto label_42093c;
        case 0x420940u: goto label_420940;
        case 0x420944u: goto label_420944;
        case 0x420948u: goto label_420948;
        case 0x42094cu: goto label_42094c;
        case 0x420950u: goto label_420950;
        case 0x420954u: goto label_420954;
        case 0x420958u: goto label_420958;
        case 0x42095cu: goto label_42095c;
        default: break;
    }

    ctx->pc = 0x4208b0u;

label_4208b0:
    // 0x4208b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4208b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4208b4:
    // 0x4208b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4208b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4208b8:
    // 0x4208b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4208b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4208bc:
    // 0x4208bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4208bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4208c0:
    // 0x4208c0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x4208c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4208c4:
    // 0x4208c4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x4208c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4208c8:
    // 0x4208c8: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_4208cc:
    if (ctx->pc == 0x4208CCu) {
        ctx->pc = 0x4208CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208C8u;
        // 0x4208cc: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4208D0u;
        goto label_4208d0;
    }
    ctx->pc = 0x4208C8u;
    {
        const bool branch_taken_0x4208c8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4208CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208C8u;
        // 0x4208cc: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4208c8) {
            ctx->pc = 0x42094Cu;
            goto label_42094c;
        }
    }
    ctx->pc = 0x4208D0u;
label_4208d0:
    // 0x4208d0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x4208d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_4208d4:
    // 0x4208d4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4208d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4208d8:
    // 0x4208d8: 0x2484ca10  addiu       $a0, $a0, -0x35F0
    ctx->pc = 0x4208d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
label_4208dc:
    // 0x4208dc: 0xc104ca6  jal         func_413298
label_4208e0:
    if (ctx->pc == 0x4208E0u) {
        ctx->pc = 0x4208E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208DCu;
        // 0x4208e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4208E4u;
        goto label_4208e4;
    }
    ctx->pc = 0x4208DCu;
    SET_GPR_U32(ctx, 31, 0x4208E4u);
    ctx->pc = 0x4208E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4208DCu;
    // 0x4208e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x4208DCu, 0x4208E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4208E4u;
label_4208e4:
    // 0x4208e4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4208e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4208e8:
    // 0x4208e8: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_4208ec:
    if (ctx->pc == 0x4208ECu) {
        ctx->pc = 0x4208ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4208E8u;
        // 0x4208ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4208F0u;
        goto label_4208f0;
    }
    ctx->pc = 0x4208E8u;
    {
        const bool branch_taken_0x4208e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4208e8) {
            ctx->pc = 0x4208ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4208E8u;
            // 0x4208ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42090Cu;
            goto label_42090c;
        }
    }
    ctx->pc = 0x4208F0u;
label_4208f0:
    // 0x4208f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4208f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4208f4:
    // 0x4208f4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4208f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4208f8:
    // 0x4208f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4208f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4208fc:
    // 0x4208fc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4208fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_420900:
    // 0x420900: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x420900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_420904:
    // 0x420904: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x420904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_420908:
    // 0x420908: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x420908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42090c:
    // 0x42090c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_420910:
    if (ctx->pc == 0x420910u) {
        ctx->pc = 0x420910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42090Cu;
        // 0x420910: 0x8e060054  lw          $a2, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420914u;
        goto label_420914;
    }
    ctx->pc = 0x42090Cu;
    {
        const bool branch_taken_0x42090c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42090c) {
            ctx->pc = 0x420910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42090Cu;
            // 0x420910: 0x8e060054  lw          $a2, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420924u;
            goto label_420924;
        }
    }
    ctx->pc = 0x420914u;
label_420914:
    // 0x420914: 0xc1074ac  jal         func_41D2B0
label_420918:
    if (ctx->pc == 0x420918u) {
        ctx->pc = 0x42091Cu;
        goto label_42091c;
    }
    ctx->pc = 0x420914u;
    SET_GPR_U32(ctx, 31, 0x42091Cu);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x420914u, 0x42091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42091Cu;
label_42091c:
    // 0x42091c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x42091cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_420920:
    // 0x420920: 0x8e060054  lw          $a2, 0x54($s0)
    ctx->pc = 0x420920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_420924:
    // 0x420924: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x420924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_420928:
    // 0x420928: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x420928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_42092c:
    // 0x42092c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42092cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_420930:
    // 0x420930: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x420930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_420934:
    // 0x420934: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x420934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_420938:
    // 0x420938: 0xae060054  sw          $a2, 0x54($s0)
    ctx->pc = 0x420938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 6));
label_42093c:
    // 0x42093c: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x42093cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420940:
    // 0x420940: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x420940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_420944:
    // 0x420944: 0x40f809  jalr        $v0
label_420948:
    if (ctx->pc == 0x420948u) {
        ctx->pc = 0x420948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420944u;
        // 0x420948: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42094Cu;
        goto label_42094c;
    }
    ctx->pc = 0x420944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42094Cu);
        ctx->pc = 0x420948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420944u;
        // 0x420948: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420944u, 0x42094Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42094Cu;
label_42094c:
    // 0x42094c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x42094cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_420950:
    // 0x420950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x420950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_420954:
    // 0x420954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_420958:
    // 0x420958: 0x3e00008  jr          $ra
label_42095c:
    if (ctx->pc == 0x42095Cu) {
        ctx->pc = 0x42095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420958u;
        // 0x42095c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420960u;
        goto label_fallthrough_0x420958;
    }
    ctx->pc = 0x420958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420958u;
        // 0x42095c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x420958:
    ctx->pc = 0x420960u;
}
