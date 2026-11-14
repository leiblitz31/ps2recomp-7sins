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

// Function: sub_003E92F8
// Address: 0x3e92f8 - 0x3e9818
void sub_003E92F8_0x3e92f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E92F8_0x3e92f8");
#endif

    switch (ctx->pc) {
        case 0x3e93b8u: goto label_3e93b8;
        case 0x3e9400u: goto label_3e9400;
        case 0x3e94e8u: goto label_3e94e8;
        case 0x3e9640u: goto label_3e9640;
        case 0x3e9790u: goto label_3e9790;
        default: break;
    }

    ctx->pc = 0x3e92f8u;

    // 0x3e92f8: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x3e92f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3e92fc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3e92fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3e9300: 0x1462009a  bne         $v1, $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x3E9300u;
    {
        const bool branch_taken_0x3e9300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9300u;
        // 0x3e9304: 0xdc8a0000  ld          $t2, 0x0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9300) {
            ctx->pc = 0x3E956Cu;
            goto label_3e956c;
        }
    }
    ctx->pc = 0x3E9308u;
    // 0x3e9308: 0x90830011  lbu         $v1, 0x11($a0)
    ctx->pc = 0x3e9308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3e930c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e9310: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3E9310u;
    {
        const bool branch_taken_0x3e9310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9310u;
        // 0x3e9314: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9310) {
            ctx->pc = 0x3E9408u;
            goto label_3e9408;
        }
    }
    ctx->pc = 0x3E9318u;
    // 0x3e9318: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e9318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e931c: 0x11400038  beqz        $t2, . + 4 + (0x38 << 2)
    ctx->pc = 0x3E931Cu;
    {
        const bool branch_taken_0x3e931c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E931Cu;
        // 0x3e9320: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e931c) {
            ctx->pc = 0x3E9400u;
            goto label_3e9400;
        }
    }
    ctx->pc = 0x3E9324u;
    // 0x3e9324: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x3e9324u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3e9328: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3e9328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e932c: 0x19400017  blez        $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E932Cu;
    {
        const bool branch_taken_0x3e932c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3E9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E932Cu;
        // 0x3e9330: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e932c) {
            ctx->pc = 0x3E938Cu;
            goto label_3e938c;
        }
    }
    ctx->pc = 0x3E9334u;
    // 0x3e9334: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E9334u;
    {
        const bool branch_taken_0x3e9334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9334u;
        // 0x3e9338: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9334) {
            ctx->pc = 0x3E93B4u;
            goto label_3e93b4;
        }
    }
    ctx->pc = 0x3E933Cu;
    // 0x3e933c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E933Cu;
    {
        const bool branch_taken_0x3e933c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E933Cu;
        // 0x3e9340: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e933c) {
            ctx->pc = 0x3E9390u;
            goto label_3e9390;
        }
    }
    ctx->pc = 0x3E9344u;
    // 0x3e9344: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e9344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e9348: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E9348u;
    {
        const bool branch_taken_0x3e9348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9348u;
        // 0x3e934c: 0x2486ffff  addiu       $a2, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9348) {
            ctx->pc = 0x3E9374u;
            goto label_3e9374;
        }
    }
    ctx->pc = 0x3E9350u;
    // 0x3e9350: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3e9350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e9354: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3e9354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e9358: 0x24c2fffd  addiu       $v0, $a2, -0x3
    ctx->pc = 0x3e9358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x3e935c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e935cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9360: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x3e9360u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x3e9364: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3e9364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9368: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3e9368u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e936c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e936cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9370: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x3e9370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3e9374:
    // 0x3e9374: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9378: 0x24c4fffd  addiu       $a0, $a2, -0x3
    ctx->pc = 0x3e9378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x3e937c: 0x24a5fffd  addiu       $a1, $a1, -0x3
    ctx->pc = 0x3e937cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x3e9380: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e9380u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3e9384: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x3e9384u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3e9388: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3e9388u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e938c:
    // 0x3e938c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e938cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3e9390:
    // 0x3e9390: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x3e9390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9394: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9398: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e9398u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3e939c: 0x24c4fffd  addiu       $a0, $a2, -0x3
    ctx->pc = 0x3e939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x3e93a0: 0x24a5fffd  addiu       $a1, $a1, -0x3
    ctx->pc = 0x3e93a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x3e93a4: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x3e93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3e93a8: 0xea402b  sltu        $t0, $a3, $t2
    ctx->pc = 0x3e93a8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e93ac: 0x11000014  beqz        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E93ACu;
    {
        const bool branch_taken_0x3e93ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E93ACu;
        // 0x3e93b0: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e93ac) {
            ctx->pc = 0x3E9400u;
            goto label_3e9400;
        }
    }
    ctx->pc = 0x3E93B4u;
label_3e93b4:
    // 0x3e93b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3e93b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e93b8:
    // 0x3e93b8: 0x90c3ffff  lbu         $v1, -0x1($a2)
    ctx->pc = 0x3e93b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3e93bc: 0x64e70004  daddiu      $a3, $a3, 0x4
    ctx->pc = 0x3e93bcu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4);
    // 0x3e93c0: 0xea402b  sltu        $t0, $a3, $t2
    ctx->pc = 0x3e93c0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e93c4: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x3e93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x3e93c8: 0xa083ffff  sb          $v1, -0x1($a0)
    ctx->pc = 0x3e93c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e93cc: 0x90c2fffb  lbu         $v0, -0x5($a2)
    ctx->pc = 0x3e93ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967291)));
    // 0x3e93d0: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x3e93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3e93d4: 0xa082fffb  sb          $v0, -0x5($a0)
    ctx->pc = 0x3e93d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967291), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e93d8: 0x90c3fff7  lbu         $v1, -0x9($a2)
    ctx->pc = 0x3e93d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967287)));
    // 0x3e93dc: 0x24c6fff3  addiu       $a2, $a2, -0xD
    ctx->pc = 0x3e93dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967283));
    // 0x3e93e0: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x3e93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x3e93e4: 0xa083fff7  sb          $v1, -0x9($a0)
    ctx->pc = 0x3e93e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967287), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e93e8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e93e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e93ec: 0x24c6fffd  addiu       $a2, $a2, -0x3
    ctx->pc = 0x3e93ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x3e93f0: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x3e93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3e93f4: 0xa082fff3  sb          $v0, -0xD($a0)
    ctx->pc = 0x3e93f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967283), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e93f8: 0x1500ffef  bnez        $t0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3E93F8u;
    {
        const bool branch_taken_0x3e93f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E93F8u;
        // 0x3e93fc: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e93f8) {
            ctx->pc = 0x3E93B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e93b8;
        }
    }
    ctx->pc = 0x3E9400u;
label_3e9400:
    // 0x3e9400: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9408u;
label_3e9408:
    // 0x3e9408: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e9408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e940c: 0x1140fffc  beqz        $t2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3E940Cu;
    {
        const bool branch_taken_0x3e940c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E940Cu;
        // 0x3e9410: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e940c) {
            ctx->pc = 0x3E9400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9400;
        }
    }
    ctx->pc = 0x3E9414u;
    // 0x3e9414: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3e9414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3e9418: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3e9418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e941c: 0x19400021  blez        $t2, . + 4 + (0x21 << 2)
    ctx->pc = 0x3E941Cu;
    {
        const bool branch_taken_0x3e941c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3E9420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E941Cu;
        // 0x3e9420: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e941c) {
            ctx->pc = 0x3E94A4u;
            goto label_3e94a4;
        }
    }
    ctx->pc = 0x3E9424u;
    // 0x3e9424: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3E9424u;
    {
        const bool branch_taken_0x3e9424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9424u;
        // 0x3e9428: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9424) {
            ctx->pc = 0x3E94E0u;
            goto label_3e94e0;
        }
    }
    ctx->pc = 0x3E942Cu;
    // 0x3e942c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E942Cu;
    {
        const bool branch_taken_0x3e942c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E942Cu;
        // 0x3e9430: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e942c) {
            ctx->pc = 0x3E94A8u;
            goto label_3e94a8;
        }
    }
    ctx->pc = 0x3E9434u;
    // 0x3e9434: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e9434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e9438: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3E9438u;
    {
        const bool branch_taken_0x3e9438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9438u;
        // 0x3e943c: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9438) {
            ctx->pc = 0x3E9478u;
            goto label_3e9478;
        }
    }
    ctx->pc = 0x3E9440u;
    // 0x3e9440: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3e9440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e9444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e9444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9448: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e9448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e944c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e944cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e9450: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9454: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e9454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e9458: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e9458u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e945c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e945cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9460: 0x24a5fffa  addiu       $a1, $a1, -0x6
    ctx->pc = 0x3e9460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
    // 0x3e9464: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3e9464u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e9468: 0xa083ffff  sb          $v1, -0x1($a0)
    ctx->pc = 0x3e9468u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e946c: 0x2484fff9  addiu       $a0, $a0, -0x7
    ctx->pc = 0x3e946cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
    // 0x3e9470: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9474: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3e9474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3e9478:
    // 0x3e9478: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e9478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e947c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e947cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9480: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9484: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3e9484u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3e9488: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3e9488u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e948c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3e948cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9490: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9494: 0x24a5fffa  addiu       $a1, $a1, -0x6
    ctx->pc = 0x3e9494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
    // 0x3e9498: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e9498u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e949c: 0xa082ffff  sb          $v0, -0x1($a0)
    ctx->pc = 0x3e949cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e94a0: 0x2484fff9  addiu       $a0, $a0, -0x7
    ctx->pc = 0x3e94a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
label_3e94a4:
    // 0x3e94a4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e94a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3e94a8:
    // 0x3e94a8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3e94a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e94ac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e94acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e94b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e94b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e94b4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e94b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e94b8: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3e94b8u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3e94bc: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3e94bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e94c0: 0x10a482b  sltu        $t1, $t0, $t2
    ctx->pc = 0x3e94c0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e94c4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3e94c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e94c8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e94c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e94cc: 0x24a5fffa  addiu       $a1, $a1, -0x6
    ctx->pc = 0x3e94ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
    // 0x3e94d0: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e94d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e94d4: 0xa082ffff  sb          $v0, -0x1($a0)
    ctx->pc = 0x3e94d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e94d8: 0x1120ffc9  beqz        $t1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x3E94D8u;
    {
        const bool branch_taken_0x3e94d8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E94D8u;
        // 0x3e94dc: 0x2484fff9  addiu       $a0, $a0, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e94d8) {
            ctx->pc = 0x3E9400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9400;
        }
    }
    ctx->pc = 0x3E94E0u;
label_3e94e0:
    // 0x3e94e0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3e94e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e94e4: 0x0  nop
    ctx->pc = 0x3e94e4u;
    // NOP
label_3e94e8:
    // 0x3e94e8: 0x90c3ffff  lbu         $v1, -0x1($a2)
    ctx->pc = 0x3e94e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3e94ec: 0x65080004  daddiu      $t0, $t0, 0x4
    ctx->pc = 0x3e94ecu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4);
    // 0x3e94f0: 0x10a482b  sltu        $t1, $t0, $t2
    ctx->pc = 0x3e94f0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e94f4: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3e94f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e94f8: 0xa083ffff  sb          $v1, -0x1($a0)
    ctx->pc = 0x3e94f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e94fc: 0x90c2fffe  lbu         $v0, -0x2($a2)
    ctx->pc = 0x3e94fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967294)));
    // 0x3e9500: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e9500u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e9504: 0xa082fffe  sb          $v0, -0x2($a0)
    ctx->pc = 0x3e9504u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9508: 0x90c3fff7  lbu         $v1, -0x9($a2)
    ctx->pc = 0x3e9508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967287)));
    // 0x3e950c: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3e950cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e9510: 0xa083fff7  sb          $v1, -0x9($a0)
    ctx->pc = 0x3e9510u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967287), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9514: 0x90c2fff6  lbu         $v0, -0xA($a2)
    ctx->pc = 0x3e9514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967286)));
    // 0x3e9518: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e9518u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e951c: 0xa082fff6  sb          $v0, -0xA($a0)
    ctx->pc = 0x3e951cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967286), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9520: 0x90c3ffef  lbu         $v1, -0x11($a2)
    ctx->pc = 0x3e9520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967279)));
    // 0x3e9524: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3e9524u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e9528: 0xa083ffef  sb          $v1, -0x11($a0)
    ctx->pc = 0x3e9528u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967279), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e952c: 0x90c2ffee  lbu         $v0, -0x12($a2)
    ctx->pc = 0x3e952cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967278)));
    // 0x3e9530: 0x24c6ffe7  addiu       $a2, $a2, -0x19
    ctx->pc = 0x3e9530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967271));
    // 0x3e9534: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e9534u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e9538: 0xa082ffee  sb          $v0, -0x12($a0)
    ctx->pc = 0x3e9538u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967278), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e953c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3e953cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e9540: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e9540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e9544: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3e9544u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e9548: 0xa083ffe7  sb          $v1, -0x19($a0)
    ctx->pc = 0x3e9548u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967271), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e954c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e954cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e9550: 0x24c6fffa  addiu       $a2, $a2, -0x6
    ctx->pc = 0x3e9550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967290));
    // 0x3e9554: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e9554u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e9558: 0xa082ffe6  sb          $v0, -0x1A($a0)
    ctx->pc = 0x3e9558u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967270), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e955c: 0x1520ffe2  bnez        $t1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3E955Cu;
    {
        const bool branch_taken_0x3e955c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E955Cu;
        // 0x3e9560: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e955c) {
            ctx->pc = 0x3E94E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e94e8;
        }
    }
    ctx->pc = 0x3E9564u;
    // 0x3e9564: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E956Cu;
label_3e956c:
    // 0x3e956c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e9570: 0x1462ffa3  bne         $v1, $v0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x3E9570u;
    {
        const bool branch_taken_0x3e9570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9570u;
        // 0x3e9574: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9570) {
            ctx->pc = 0x3E9400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9400;
        }
    }
    ctx->pc = 0x3E9578u;
    // 0x3e9578: 0x90830011  lbu         $v1, 0x11($a0)
    ctx->pc = 0x3e9578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3e957c: 0x1462004d  bne         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x3E957Cu;
    {
        const bool branch_taken_0x3e957c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E957Cu;
        // 0x3e9580: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e957c) {
            ctx->pc = 0x3E96B4u;
            goto label_3e96b4;
        }
    }
    ctx->pc = 0x3E9584u;
    // 0x3e9584: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e9584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9588: 0x1140ff9d  beqz        $t2, . + 4 + (-0x63 << 2)
    ctx->pc = 0x3E9588u;
    {
        const bool branch_taken_0x3e9588 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9588u;
        // 0x3e958c: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9588) {
            ctx->pc = 0x3E9400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9400;
        }
    }
    ctx->pc = 0x3E9590u;
    // 0x3e9590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e9590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9594: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x3e9594u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3e9598: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3e9598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e959c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3e959cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e95a0: 0x19400019  blez        $t2, . + 4 + (0x19 << 2)
    ctx->pc = 0x3E95A0u;
    {
        const bool branch_taken_0x3e95a0 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3E95A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E95A0u;
        // 0x3e95a4: 0x31450003  andi        $a1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e95a0) {
            ctx->pc = 0x3E9608u;
            goto label_3e9608;
        }
    }
    ctx->pc = 0x3E95A8u;
    // 0x3e95a8: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3E95A8u;
    {
        const bool branch_taken_0x3e95a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E95A8u;
        // 0x3e95ac: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e95a8) {
            ctx->pc = 0x3E9638u;
            goto label_3e9638;
        }
    }
    ctx->pc = 0x3E95B0u;
    // 0x3e95b0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E95B0u;
    {
        const bool branch_taken_0x3e95b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E95B0u;
        // 0x3e95b4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e95b0) {
            ctx->pc = 0x3E960Cu;
            goto label_3e960c;
        }
    }
    ctx->pc = 0x3E95B8u;
    // 0x3e95b8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x3e95b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e95bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E95BCu;
    {
        const bool branch_taken_0x3e95bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E95BCu;
        // 0x3e95c0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e95bc) {
            ctx->pc = 0x3E95E8u;
            goto label_3e95e8;
        }
    }
    ctx->pc = 0x3E95C4u;
    // 0x3e95c4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e95c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e95c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3e95c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e95cc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e95ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e95d0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3e95d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e95d4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3e95d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e95d8: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x3e95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3e95dc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e95dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e95e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e95e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e95e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e95e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3e95e8:
    // 0x3e95e8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e95e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e95ec: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e95ecu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3e95f0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e95f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e95f4: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x3e95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3e95f8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e95f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e95fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e95fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9600: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e9600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e9604: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e9604u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9608:
    // 0x3e9608: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e9608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3e960c:
    // 0x3e960c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e960cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9610: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e9610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e9614: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e9614u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3e9618: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e9618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e961c: 0xea402b  sltu        $t0, $a3, $t2
    ctx->pc = 0x3e961cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e9620: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x3e9620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3e9624: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e9624u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9628: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e962c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e962cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e9630: 0x1100ff73  beqz        $t0, . + 4 + (-0x8D << 2)
    ctx->pc = 0x3E9630u;
    {
        const bool branch_taken_0x3e9630 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9630u;
        // 0x3e9634: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9630) {
            ctx->pc = 0x3E9400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9400;
        }
    }
    ctx->pc = 0x3E9638u;
label_3e9638:
    // 0x3e9638: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3e9638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e963c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e9640:
    // 0x3e9640: 0x90a2ffff  lbu         $v0, -0x1($a1)
    ctx->pc = 0x3e9640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x3e9644: 0x64e70004  daddiu      $a3, $a3, 0x4
    ctx->pc = 0x3e9644u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4);
    // 0x3e9648: 0xea402b  sltu        $t0, $a3, $t2
    ctx->pc = 0x3e9648u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e964c: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x3e964cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3e9650: 0xa082ffff  sb          $v0, -0x1($a0)
    ctx->pc = 0x3e9650u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9654: 0x90a3fffe  lbu         $v1, -0x2($a1)
    ctx->pc = 0x3e9654u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x3e9658: 0xa083fffe  sb          $v1, -0x2($a0)
    ctx->pc = 0x3e9658u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e965c: 0x90a2fffd  lbu         $v0, -0x3($a1)
    ctx->pc = 0x3e965cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967293)));
    // 0x3e9660: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x3e9660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3e9664: 0xa082fffd  sb          $v0, -0x3($a0)
    ctx->pc = 0x3e9664u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967293), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9668: 0x90a3fffc  lbu         $v1, -0x4($a1)
    ctx->pc = 0x3e9668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x3e966c: 0xa083fffc  sb          $v1, -0x4($a0)
    ctx->pc = 0x3e966cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967292), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9670: 0x90a2fffb  lbu         $v0, -0x5($a1)
    ctx->pc = 0x3e9670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967291)));
    // 0x3e9674: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x3e9674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3e9678: 0xa082fffb  sb          $v0, -0x5($a0)
    ctx->pc = 0x3e9678u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967291), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e967c: 0x90a3fffa  lbu         $v1, -0x6($a1)
    ctx->pc = 0x3e967cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967290)));
    // 0x3e9680: 0x24a5fff9  addiu       $a1, $a1, -0x7
    ctx->pc = 0x3e9680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x3e9684: 0xa083fffa  sb          $v1, -0x6($a0)
    ctx->pc = 0x3e9684u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967290), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9688: 0x2484fff9  addiu       $a0, $a0, -0x7
    ctx->pc = 0x3e9688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
    // 0x3e968c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e968cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9690: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9694: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x3e9694u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3e9698: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e9698u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e969c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e969cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e96a0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e96a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e96a4: 0x1500ffe6  bnez        $t0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E96A4u;
    {
        const bool branch_taken_0x3e96a4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96A4u;
        // 0x3e96a8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e96a4) {
            ctx->pc = 0x3E9640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9640;
        }
    }
    ctx->pc = 0x3E96ACu;
    // 0x3e96ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3E96ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E96ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E96B4u;
label_3e96b4:
    // 0x3e96b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e96b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e96b8: 0x1140ff51  beqz        $t2, . + 4 + (-0xAF << 2)
    ctx->pc = 0x3E96B8u;
    {
        const bool branch_taken_0x3e96b8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E96BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96B8u;
        // 0x3e96bc: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e96b8) {
            ctx->pc = 0x3E9400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9400;
        }
    }
    ctx->pc = 0x3E96C0u;
    // 0x3e96c0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3e96c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3e96c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3e96c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e96c8: 0x19400021  blez        $t2, . + 4 + (0x21 << 2)
    ctx->pc = 0x3E96C8u;
    {
        const bool branch_taken_0x3e96c8 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3E96CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96C8u;
        // 0x3e96cc: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e96c8) {
            ctx->pc = 0x3E9750u;
            goto label_3e9750;
        }
    }
    ctx->pc = 0x3E96D0u;
    // 0x3e96d0: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3E96D0u;
    {
        const bool branch_taken_0x3e96d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96D0u;
        // 0x3e96d4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e96d0) {
            ctx->pc = 0x3E978Cu;
            goto label_3e978c;
        }
    }
    ctx->pc = 0x3E96D8u;
    // 0x3e96d8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E96D8u;
    {
        const bool branch_taken_0x3e96d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E96DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96D8u;
        // 0x3e96dc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e96d8) {
            ctx->pc = 0x3E9754u;
            goto label_3e9754;
        }
    }
    ctx->pc = 0x3E96E0u;
    // 0x3e96e0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e96e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e96e4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3E96E4u;
    {
        const bool branch_taken_0x3e96e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96E4u;
        // 0x3e96e8: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e96e4) {
            ctx->pc = 0x3E9724u;
            goto label_3e9724;
        }
    }
    ctx->pc = 0x3E96ECu;
    // 0x3e96ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3e96ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e96f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e96f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e96f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e96f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e96f8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e96f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e96fc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e96fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9700: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e9700u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e9704: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3e9704u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9708: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e9708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e970c: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x3e970cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3e9710: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3e9710u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e9714: 0xa083ffff  sb          $v1, -0x1($a0)
    ctx->pc = 0x3e9714u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9718: 0x2484fffd  addiu       $a0, $a0, -0x3
    ctx->pc = 0x3e9718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
    // 0x3e971c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e971cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9720: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3e9720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3e9724:
    // 0x3e9724: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e9724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e9728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e972c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e972cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9730: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3e9730u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3e9734: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3e9734u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e9738: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3e9738u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e973c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e973cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9740: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x3e9740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3e9744: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e9744u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e9748: 0xa082ffff  sb          $v0, -0x1($a0)
    ctx->pc = 0x3e9748u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e974c: 0x2484fffd  addiu       $a0, $a0, -0x3
    ctx->pc = 0x3e974cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
label_3e9750:
    // 0x3e9750: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3e9754:
    // 0x3e9754: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3e9754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e9758: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3e9758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e975c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e975cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9760: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3e9760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e9764: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3e9764u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3e9768: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3e9768u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e976c: 0x10a482b  sltu        $t1, $t0, $t2
    ctx->pc = 0x3e976cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e9770: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3e9770u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9774: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e9774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e9778: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x3e9778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3e977c: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e977cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e9780: 0xa082ffff  sb          $v0, -0x1($a0)
    ctx->pc = 0x3e9780u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9784: 0x1120ff1e  beqz        $t1, . + 4 + (-0xE2 << 2)
    ctx->pc = 0x3E9784u;
    {
        const bool branch_taken_0x3e9784 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9784u;
        // 0x3e9788: 0x2484fffd  addiu       $a0, $a0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9784) {
            ctx->pc = 0x3E9400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9400;
        }
    }
    ctx->pc = 0x3E978Cu;
label_3e978c:
    // 0x3e978c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3e978cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e9790:
    // 0x3e9790: 0x90c3ffff  lbu         $v1, -0x1($a2)
    ctx->pc = 0x3e9790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x3e9794: 0x65080004  daddiu      $t0, $t0, 0x4
    ctx->pc = 0x3e9794u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4);
    // 0x3e9798: 0x10a482b  sltu        $t1, $t0, $t2
    ctx->pc = 0x3e9798u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e979c: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3e979cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e97a0: 0xa083ffff  sb          $v1, -0x1($a0)
    ctx->pc = 0x3e97a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e97a4: 0x90c2fffe  lbu         $v0, -0x2($a2)
    ctx->pc = 0x3e97a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967294)));
    // 0x3e97a8: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e97a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e97ac: 0xa082fffe  sb          $v0, -0x2($a0)
    ctx->pc = 0x3e97acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e97b0: 0x90c3fffb  lbu         $v1, -0x5($a2)
    ctx->pc = 0x3e97b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967291)));
    // 0x3e97b4: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3e97b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e97b8: 0xa083fffb  sb          $v1, -0x5($a0)
    ctx->pc = 0x3e97b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967291), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e97bc: 0x90c2fffa  lbu         $v0, -0x6($a2)
    ctx->pc = 0x3e97bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967290)));
    // 0x3e97c0: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e97c4: 0xa082fffa  sb          $v0, -0x6($a0)
    ctx->pc = 0x3e97c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967290), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e97c8: 0x90c3fff7  lbu         $v1, -0x9($a2)
    ctx->pc = 0x3e97c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967287)));
    // 0x3e97cc: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3e97ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e97d0: 0xa083fff7  sb          $v1, -0x9($a0)
    ctx->pc = 0x3e97d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967287), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e97d4: 0x90c2fff6  lbu         $v0, -0xA($a2)
    ctx->pc = 0x3e97d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967286)));
    // 0x3e97d8: 0x24c6fff3  addiu       $a2, $a2, -0xD
    ctx->pc = 0x3e97d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967283));
    // 0x3e97dc: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e97e0: 0xa082fff6  sb          $v0, -0xA($a0)
    ctx->pc = 0x3e97e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967286), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e97e4: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3e97e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e97e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3e97e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3e97ec: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x3e97ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3e97f0: 0xa083fff3  sb          $v1, -0xD($a0)
    ctx->pc = 0x3e97f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967283), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e97f4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e97f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e97f8: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x3e97f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x3e97fc: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3e97fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3e9800: 0xa082fff2  sb          $v0, -0xE($a0)
    ctx->pc = 0x3e9800u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967282), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e9804: 0x1520ffe2  bnez        $t1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3E9804u;
    {
        const bool branch_taken_0x3e9804 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9804u;
        // 0x3e9808: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9804) {
            ctx->pc = 0x3E9790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9790;
        }
    }
    ctx->pc = 0x3E980Cu;
    // 0x3e980c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E980Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E980Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9814u;
    // 0x3e9814: 0x0  nop
    ctx->pc = 0x3e9814u;
    // NOP
    ctx->pc = 0x3e9818u;
}
