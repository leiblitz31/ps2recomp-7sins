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

// Function: sub_004197E0
// Address: 0x4197e0 - 0x4198e0
void sub_004197E0_0x4197e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004197E0_0x4197e0");
#endif

    switch (ctx->pc) {
        case 0x4197f8u: goto label_4197f8;
        case 0x41987cu: goto label_41987c;
        default: break;
    }

    ctx->pc = 0x4197e0u;

    // 0x4197e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4197e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4197e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4197e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4197e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4197e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4197ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4197ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4197f0: 0xc103df4  jal         func_40F7D0
    ctx->pc = 0x4197F0u;
    SET_GPR_U32(ctx, 31, 0x4197F8u);
    ctx->pc = 0x4197F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4197F0u;
    // 0x4197f4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F7D0u, 0x4197F0u, 0x4197F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4197F8u;
label_4197f8:
    // 0x4197f8: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x4197f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x4197fc: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x4197fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x419800: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x419800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x419804: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x419804u;
    {
        const bool branch_taken_0x419804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419804) {
            ctx->pc = 0x419808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419804u;
            // 0x419808: 0x8e0500a0  lw          $a1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419834u;
            goto label_419834;
        }
    }
    ctx->pc = 0x41980Cu;
    // 0x41980c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41980cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x419810: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x419810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x419814: 0x8c64e93c  lw          $a0, -0x16C4($v1)
    ctx->pc = 0x419814u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x419818: 0x2462e93c  addiu       $v0, $v1, -0x16C4
    ctx->pc = 0x419818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961468));
    // 0x41981c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x41981cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x419820: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x419820u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x419824: 0x8c62e93c  lw          $v0, -0x16C4($v1)
    ctx->pc = 0x419824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x419828: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x419828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x41982c: 0xac65e93c  sw          $a1, -0x16C4($v1)
    ctx->pc = 0x41982cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61E93Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E93Cu, _value); } while (0);
    // 0x419830: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x419830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_419834:
    // 0x419834: 0x34e40003  ori         $a0, $a3, 0x3
    ctx->pc = 0x419834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x419838: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x419838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41983c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41983cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419840: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x419840u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x419844: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x419844u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x419848: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x419848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x41984c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x41984cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x419850: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x419850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419854: 0x3e00008  jr          $ra
    ctx->pc = 0x419854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419854u;
        // 0x419858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41985Cu;
    // 0x41985c: 0x0  nop
    ctx->pc = 0x41985cu;
    // NOP
    // 0x419860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x419860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x419864: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x419864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x419868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x419868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41986c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419870: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x419870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x419874: 0xc103e64  jal         func_40F990
    ctx->pc = 0x419874u;
    SET_GPR_U32(ctx, 31, 0x41987Cu);
    ctx->pc = 0x419878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419874u;
    // 0x419878: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F990u, 0x419874u, 0x41987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41987Cu;
label_41987c:
    // 0x41987c: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x41987cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x419880: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x419880u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x419884: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x419884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x419888: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x419888u;
    {
        const bool branch_taken_0x419888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419888) {
            ctx->pc = 0x41988Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419888u;
            // 0x41988c: 0x8e0500a0  lw          $a1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4198B8u;
            goto label_4198b8;
        }
    }
    ctx->pc = 0x419890u;
    // 0x419890: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x419890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x419894: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x419894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x419898: 0x8c64e93c  lw          $a0, -0x16C4($v1)
    ctx->pc = 0x419898u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x41989c: 0x2462e93c  addiu       $v0, $v1, -0x16C4
    ctx->pc = 0x41989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961468));
    // 0x4198a0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x4198a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x4198a4: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4198a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x4198a8: 0x8c62e93c  lw          $v0, -0x16C4($v1)
    ctx->pc = 0x4198a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x4198ac: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x4198acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x4198b0: 0xac65e93c  sw          $a1, -0x16C4($v1)
    ctx->pc = 0x4198b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61E93Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E93Cu, _value); } while (0);
    // 0x4198b4: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x4198b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4198b8:
    // 0x4198b8: 0x34e40003  ori         $a0, $a3, 0x3
    ctx->pc = 0x4198b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x4198bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4198bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4198c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4198c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4198c4: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x4198c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x4198c8: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x4198c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x4198cc: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x4198ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x4198d0: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x4198d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x4198d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4198d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4198d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4198D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4198DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4198D8u;
        // 0x4198dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4198D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4198E0u;
}
