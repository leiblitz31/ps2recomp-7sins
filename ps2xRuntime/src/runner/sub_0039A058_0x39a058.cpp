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

// Function: sub_0039A058
// Address: 0x39a058 - 0x39a170
void sub_0039A058_0x39a058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A058_0x39a058");
#endif

    switch (ctx->pc) {
        case 0x39a0b0u: goto label_39a0b0;
        case 0x39a100u: goto label_39a100;
        case 0x39a11cu: goto label_39a11c;
        default: break;
    }

    ctx->pc = 0x39a058u;

    // 0x39a058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39a058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39a05c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39a05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39a060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a068: 0x96020084  lhu         $v0, 0x84($s0)
    ctx->pc = 0x39a068u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x39a06c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x39A06Cu;
    {
        const bool branch_taken_0x39a06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A06Cu;
        // 0x39a070: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a06c) {
            ctx->pc = 0x39A0B8u;
            goto label_39a0b8;
        }
    }
    ctx->pc = 0x39A074u;
    // 0x39a074: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x39a074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x39a078: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x39A078u;
    {
        const bool branch_taken_0x39a078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A078u;
        // 0x39a07c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a078) {
            ctx->pc = 0x39A0A8u;
            goto label_39a0a8;
        }
    }
    ctx->pc = 0x39A080u;
    // 0x39a080: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39a080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x39a084: 0x2445e880  addiu       $a1, $v0, -0x1780
    ctx->pc = 0x39a084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x39a088: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x39a088u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E884u));
    // 0x39a08c: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x39a08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x39a090: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x39A090u;
    {
        const bool branch_taken_0x39a090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a090) {
            ctx->pc = 0x39A094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A090u;
            // 0x39a094: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A0A8u;
            goto label_39a0a8;
        }
    }
    ctx->pc = 0x39A098u;
    // 0x39a098: 0x8f82bf20  lw          $v0, -0x40E0($gp)
    ctx->pc = 0x39a098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x39a09c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39a0a0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x39a0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x39a0a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39a0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a0a8:
    // 0x39a0a8: 0xc111718  jal         func_445C60
    ctx->pc = 0x39A0A8u;
    SET_GPR_U32(ctx, 31, 0x39A0B0u);
    ctx->pc = 0x39A0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A0A8u;
    // 0x39a0ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x39A0A8u, 0x39A0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A0B0u;
label_39a0b0:
    // 0x39a0b0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x39a0b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x39a0b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39a0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a0b8:
    // 0x39a0b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39a0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x39A0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0C0u;
        // 0x39a0c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A0C8u;
    // 0x39a0c8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x39a0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x39a0cc: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x39a0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x39a0d0: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x39a0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x39a0d4: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x39a0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x39a0d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39a0d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a0dc: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x39a0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x39a0e0: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x39a0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x39a0e4: 0x8e70001c  lw          $s0, 0x1C($s3)
    ctx->pc = 0x39a0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x39a0e8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39A0E8u;
    {
        const bool branch_taken_0x39a0e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0E8u;
        // 0x39a0ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a0e8) {
            ctx->pc = 0x39A0F8u;
            goto label_39a0f8;
        }
    }
    ctx->pc = 0x39A0F0u;
    // 0x39a0f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x39A0F0u;
    {
        const bool branch_taken_0x39a0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0F0u;
        // 0x39a0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a0f0) {
            ctx->pc = 0x39A150u;
            goto label_39a150;
        }
    }
    ctx->pc = 0x39A0F8u;
label_39a0f8:
    // 0x39a0f8: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x39a0f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a0fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39a100:
    // 0x39a100: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x39A100u;
    {
        const bool branch_taken_0x39a100 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x39A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A100u;
        // 0x39a104: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a100) {
            ctx->pc = 0x39A130u;
            goto label_39a130;
        }
    }
    ctx->pc = 0x39A108u;
    // 0x39a108: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x39a108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x39a10c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x39A10Cu;
    {
        const bool branch_taken_0x39a10c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a10c) {
            ctx->pc = 0x39A110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A10Cu;
            // 0x39a110: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A124u;
            goto label_39a124;
        }
    }
    ctx->pc = 0x39A114u;
    // 0x39a114: 0xc0e4052  jal         func_390148
    ctx->pc = 0x39A114u;
    SET_GPR_U32(ctx, 31, 0x39A11Cu);
    ctx->pc = 0x390148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390148u, 0x39A114u, 0x39A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A11Cu;
label_39a11c:
    // 0x39a11c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x39a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x39a120: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x39a120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39a124:
    // 0x39a124: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x39a124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x39a128: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39A128u;
    {
        const bool branch_taken_0x39a128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A128u;
        // 0x39a12c: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a128) {
            ctx->pc = 0x39A144u;
            goto label_39a144;
        }
    }
    ctx->pc = 0x39A130u;
label_39a130:
    // 0x39a130: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x39a130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x39a134: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x39a134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x39a138: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39a138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x39a13c: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x39a13cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39a140: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x39a140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_39a144:
    // 0x39a144: 0x643ffee  bgezl       $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x39A144u;
    {
        const bool branch_taken_0x39a144 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x39a144) {
            ctx->pc = 0x39A148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A144u;
            // 0x39a148: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a100;
        }
    }
    ctx->pc = 0x39A14Cu;
    // 0x39a14c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x39a14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39a150:
    // 0x39a150: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x39a150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x39a154: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x39a154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x39a158: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x39a158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x39a15c: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x39a15cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x39a160: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x39a160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x39a164: 0x3e00008  jr          $ra
    ctx->pc = 0x39A164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A164u;
        // 0x39a168: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A16Cu;
    // 0x39a16c: 0x0  nop
    ctx->pc = 0x39a16cu;
    // NOP
    ctx->pc = 0x39a170u;
}
