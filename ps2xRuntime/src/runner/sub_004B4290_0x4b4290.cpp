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

// Function: sub_004B4290
// Address: 0x4b4290 - 0x4b4380
void sub_004B4290_0x4b4290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4290_0x4b4290");
#endif

    switch (ctx->pc) {
        case 0x4b42c0u: goto label_4b42c0;
        case 0x4b4318u: goto label_4b4318;
        default: break;
    }

    ctx->pc = 0x4b4290u;

    // 0x4b4290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b4290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b4294: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4b4294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4b4298: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4b4298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4b429c: 0x24a52600  addiu       $a1, $a1, 0x2600
    ctx->pc = 0x4b429cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    // 0x4b42a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b42a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4b42a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b42a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b42a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4b42a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4b42ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b42acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b42b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b42b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b42b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4b42b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b42b8: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4B42B8u;
    SET_GPR_U32(ctx, 31, 0x4B42C0u);
    ctx->pc = 0x4B42BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B42B8u;
    // 0x4b42bc: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4B42B8u, 0x4B42C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B42C0u;
label_4b42c0:
    // 0x4b42c0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B42C0u;
    {
        const bool branch_taken_0x4b42c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B42C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B42C0u;
        // 0x4b42c4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b42c0) {
            ctx->pc = 0x4B430Cu;
            goto label_4b430c;
        }
    }
    ctx->pc = 0x4B42C8u;
    // 0x4b42c8: 0x9204000d  lbu         $a0, 0xD($s0)
    ctx->pc = 0x4b42c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x4b42cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b42d0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B42D0u;
    {
        const bool branch_taken_0x4b42d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B42D0u;
        // 0x4b42d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b42d0) {
            ctx->pc = 0x4B42E8u;
            goto label_4b42e8;
        }
    }
    ctx->pc = 0x4B42D8u;
    // 0x4b42d8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B42D8u;
    {
        const bool branch_taken_0x4b42d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B42D8u;
        // 0x4b42dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b42d8) {
            ctx->pc = 0x4B42F8u;
            goto label_4b42f8;
        }
    }
    ctx->pc = 0x4B42E0u;
    // 0x4b42e0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x4B42E0u;
    {
        const bool branch_taken_0x4b42e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B42E0u;
        // 0x4b42e4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b42e0) {
            ctx->pc = 0x4B4368u;
            goto label_4b4368;
        }
    }
    ctx->pc = 0x4B42E8u;
label_4b42e8:
    // 0x4b42e8: 0x128902  srl         $s1, $s2, 4
    ctx->pc = 0x4b42e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x4b42ec: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x4b42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4b42f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4B42F0u;
    {
        const bool branch_taken_0x4b42f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B42F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B42F0u;
        // 0x4b42f4: 0x2228818  mult        $s1, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b42f0) {
            ctx->pc = 0x4B4360u;
            goto label_4b4360;
        }
    }
    ctx->pc = 0x4B42F8u;
label_4b42f8:
    // 0x4b42f8: 0x128902  srl         $s1, $s2, 4
    ctx->pc = 0x4b42f8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x4b42fc: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x4b42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4b4300: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x4b4300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x4b4304: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4B4304u;
    {
        const bool branch_taken_0x4b4304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4304u;
        // 0x4b4308: 0x118842  srl         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4304) {
            ctx->pc = 0x4B4360u;
            goto label_4b4360;
        }
    }
    ctx->pc = 0x4B430Cu;
label_4b430c:
    // 0x4b430c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4b430cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b4310: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4B4310u;
    SET_GPR_U32(ctx, 31, 0x4B4318u);
    ctx->pc = 0x4B4314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4310u;
    // 0x4b4314: 0x24a52610  addiu       $a1, $a1, 0x2610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4B4310u, 0x4B4318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4318u;
label_4b4318:
    // 0x4b4318: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B4318u;
    {
        const bool branch_taken_0x4b4318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4318u;
        // 0x4b431c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4318) {
            ctx->pc = 0x4B4364u;
            goto label_4b4364;
        }
    }
    ctx->pc = 0x4B4320u;
    // 0x4b4320: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4b4320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4b4324: 0x9204000c  lbu         $a0, 0xC($s0)
    ctx->pc = 0x4b4324u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4b4328: 0x904320c4  lbu         $v1, 0x20C4($v0)
    ctx->pc = 0x4b4328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6020C4u));
    // 0x4b432c: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4B432Cu;
    {
        const bool branch_taken_0x4b432c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B432Cu;
        // 0x4b4330: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b432c) {
            ctx->pc = 0x4B4364u;
            goto label_4b4364;
        }
    }
    ctx->pc = 0x4B4334u;
    // 0x4b4334: 0x9204000d  lbu         $a0, 0xD($s0)
    ctx->pc = 0x4b4334u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x4b4338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b4338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b433c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B433Cu;
    {
        const bool branch_taken_0x4b433c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B433Cu;
        // 0x4b4340: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b433c) {
            ctx->pc = 0x4B4354u;
            goto label_4b4354;
        }
    }
    ctx->pc = 0x4B4344u;
    // 0x4b4344: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4344u;
    {
        const bool branch_taken_0x4b4344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4344u;
        // 0x4b4348: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4344) {
            ctx->pc = 0x4B435Cu;
            goto label_4b435c;
        }
    }
    ctx->pc = 0x4B434Cu;
    // 0x4b434c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B434Cu;
    {
        const bool branch_taken_0x4b434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B434Cu;
        // 0x4b4350: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b434c) {
            ctx->pc = 0x4B4368u;
            goto label_4b4368;
        }
    }
    ctx->pc = 0x4B4354u;
label_4b4354:
    // 0x4b4354: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B4354u;
    {
        const bool branch_taken_0x4b4354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4354u;
        // 0x4b4358: 0x128842  srl         $s1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4354) {
            ctx->pc = 0x4B4360u;
            goto label_4b4360;
        }
    }
    ctx->pc = 0x4B435Cu;
label_4b435c:
    // 0x4b435c: 0x128882  srl         $s1, $s2, 2
    ctx->pc = 0x4b435cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 18), 2));
label_4b4360:
    // 0x4b4360: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b4360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b4364:
    // 0x4b4364: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4b4364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b4368:
    // 0x4b4368: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b4368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b436c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4b436cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b4370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4374: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4374u;
        // 0x4b4378: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B437Cu;
    // 0x4b437c: 0x0  nop
    ctx->pc = 0x4b437cu;
    // NOP
    ctx->pc = 0x4b4380u;
}
