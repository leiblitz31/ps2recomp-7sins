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

// Function: sub_004021D0
// Address: 0x4021d0 - 0x402308
void sub_004021D0_0x4021d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004021D0_0x4021d0");
#endif

    switch (ctx->pc) {
        case 0x402224u: goto label_402224;
        case 0x402244u: goto label_402244;
        case 0x4022a0u: goto label_4022a0;
        case 0x4022b4u: goto label_4022b4;
        case 0x4022bcu: goto label_4022bc;
        case 0x4022e0u: goto label_4022e0;
        case 0x4022f0u: goto label_4022f0;
        case 0x4022f8u: goto label_4022f8;
        default: break;
    }

    ctx->pc = 0x4021d0u;

    // 0x4021d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4021d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4021d4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4021d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4021d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4021d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4021dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4021dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4021e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4021e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4021e4: 0x14c2001b  bne         $a2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4021E4u;
    {
        const bool branch_taken_0x4021e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4021E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4021E4u;
        // 0x4021e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4021e4) {
            ctx->pc = 0x402254u;
            goto label_402254;
        }
    }
    ctx->pc = 0x4021ECu;
    // 0x4021ec: 0x960401fc  lhu         $a0, 0x1FC($s0)
    ctx->pc = 0x4021ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 508)));
    // 0x4021f0: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4021F0u;
    {
        const bool branch_taken_0x4021f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4021f0) {
            ctx->pc = 0x4021F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4021F0u;
            // 0x4021f4: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40220Cu;
            goto label_40220c;
        }
    }
    ctx->pc = 0x4021F8u;
    // 0x4021f8: 0x920202d8  lbu         $v0, 0x2D8($s0)
    ctx->pc = 0x4021f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x4021fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4021fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x402200: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x402200u;
    {
        const bool branch_taken_0x402200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x402200) {
            ctx->pc = 0x402204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402200u;
            // 0x402204: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x402230u;
            goto label_402230;
        }
    }
    ctx->pc = 0x402208u;
    // 0x402208: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x402208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_40220c:
    // 0x40220c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x40220cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x402210: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x402210u;
    {
        const bool branch_taken_0x402210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x402214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402210u;
        // 0x402214: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402210) {
            ctx->pc = 0x40222Cu;
            goto label_40222c;
        }
    }
    ctx->pc = 0x402218u;
    // 0x402218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40221c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x40221Cu;
    SET_GPR_U32(ctx, 31, 0x402224u);
    ctx->pc = 0x402220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40221Cu;
    // 0x402220: 0x24a502a8  addiu       $a1, $a1, 0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x40221Cu, 0x402224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402224u;
label_402224:
    // 0x402224: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x402224u;
    {
        const bool branch_taken_0x402224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402224u;
        // 0x402228: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402224) {
            ctx->pc = 0x4022FCu;
            goto label_4022fc;
        }
    }
    ctx->pc = 0x40222Cu;
label_40222c:
    // 0x40222c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x40222cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_402230:
    // 0x402230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402234: 0x2785ac58  addiu       $a1, $gp, -0x53A8
    ctx->pc = 0x402234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945880));
    // 0x402238: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x402238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40223c: 0xc101b98  jal         func_406E60
    ctx->pc = 0x40223Cu;
    SET_GPR_U32(ctx, 31, 0x402244u);
    ctx->pc = 0x402240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40223Cu;
    // 0x402240: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x40223Cu, 0x402244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402244u;
label_402244:
    // 0x402244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402248: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x402248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40224c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x40224Cu;
    {
        const bool branch_taken_0x40224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40224Cu;
        // 0x402250: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40224c) {
            ctx->pc = 0x4022ACu;
            goto label_4022ac;
        }
    }
    ctx->pc = 0x402254u;
label_402254:
    // 0x402254: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x402254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x402258: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x402258u;
    {
        const bool branch_taken_0x402258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x402258) {
            ctx->pc = 0x40225Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402258u;
            // 0x40225c: 0x94630008  lhu         $v1, 0x8($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4022C4u;
            goto label_4022c4;
        }
    }
    ctx->pc = 0x402260u;
    // 0x402260: 0x94690006  lhu         $t1, 0x6($v1)
    ctx->pc = 0x402260u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x402264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402268: 0x94670004  lhu         $a3, 0x4($v1)
    ctx->pc = 0x402268u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x40226c: 0x2785ac58  addiu       $a1, $gp, -0x53A8
    ctx->pc = 0x40226cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945880));
    // 0x402270: 0x94660002  lhu         $a2, 0x2($v1)
    ctx->pc = 0x402270u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x402274: 0x94202  srl         $t0, $t1, 8
    ctx->pc = 0x402274u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x402278: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x402278u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x40227c: 0xa3a70003  sb          $a3, 0x3($sp)
    ctx->pc = 0x40227cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x402280: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x402280u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x402284: 0xa3a60001  sb          $a2, 0x1($sp)
    ctx->pc = 0x402284u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x402288: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x402288u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x40228c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x40228cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x402290: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x402290u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x402294: 0xa3a80004  sb          $t0, 0x4($sp)
    ctx->pc = 0x402294u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x402298: 0xc101b98  jal         func_406E60
    ctx->pc = 0x402298u;
    SET_GPR_U32(ctx, 31, 0x4022A0u);
    ctx->pc = 0x40229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402298u;
    // 0x40229c: 0xa3a90005  sb          $t1, 0x5($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x402298u, 0x4022A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4022A0u;
label_4022a0:
    // 0x4022a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4022a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4022a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4022a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4022a8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4022a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4022ac:
    // 0x4022ac: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x4022ACu;
    SET_GPR_U32(ctx, 31, 0x4022B4u);
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x4022ACu, 0x4022B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4022B4u;
label_4022b4:
    // 0x4022b4: 0xc101bda  jal         func_406F68
    ctx->pc = 0x4022B4u;
    SET_GPR_U32(ctx, 31, 0x4022BCu);
    ctx->pc = 0x4022B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4022B4u;
    // 0x4022b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x4022B4u, 0x4022BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4022BCu;
label_4022bc:
    // 0x4022bc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4022BCu;
    {
        const bool branch_taken_0x4022bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4022C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4022BCu;
        // 0x4022c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4022bc) {
            ctx->pc = 0x4022FCu;
            goto label_4022fc;
        }
    }
    ctx->pc = 0x4022C4u;
label_4022c4:
    // 0x4022c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4022c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4022c8: 0x2785ac58  addiu       $a1, $gp, -0x53A8
    ctx->pc = 0x4022c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945880));
    // 0x4022cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4022ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4022d0: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x4022d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x4022d4: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x4022d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x4022d8: 0xc101b98  jal         func_406E60
    ctx->pc = 0x4022D8u;
    SET_GPR_U32(ctx, 31, 0x4022E0u);
    ctx->pc = 0x4022DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4022D8u;
    // 0x4022dc: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x4022D8u, 0x4022E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4022E0u;
label_4022e0:
    // 0x4022e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4022e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4022e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4022e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4022e8: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x4022E8u;
    SET_GPR_U32(ctx, 31, 0x4022F0u);
    ctx->pc = 0x4022ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4022E8u;
    // 0x4022ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x4022E8u, 0x4022F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4022F0u;
label_4022f0:
    // 0x4022f0: 0xc101bda  jal         func_406F68
    ctx->pc = 0x4022F0u;
    SET_GPR_U32(ctx, 31, 0x4022F8u);
    ctx->pc = 0x4022F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4022F0u;
    // 0x4022f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x4022F0u, 0x4022F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4022F8u;
label_4022f8:
    // 0x4022f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4022f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4022fc:
    // 0x4022fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4022fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x402300: 0x3e00008  jr          $ra
    ctx->pc = 0x402300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402300u;
        // 0x402304: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x402308u;
}
