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

// Function: sub_00305F88
// Address: 0x305f88 - 0x306360
void sub_00305F88_0x305f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305F88_0x305f88");
#endif

    switch (ctx->pc) {
        case 0x305fe4u: goto label_305fe4;
        case 0x306010u: goto label_306010;
        case 0x306070u: goto label_306070;
        case 0x3060f4u: goto label_3060f4;
        case 0x306110u: goto label_306110;
        case 0x306160u: goto label_306160;
        case 0x306180u: goto label_306180;
        case 0x3061d0u: goto label_3061d0;
        case 0x3061f0u: goto label_3061f0;
        case 0x306240u: goto label_306240;
        case 0x306260u: goto label_306260;
        case 0x3062bcu: goto label_3062bc;
        case 0x3062e0u: goto label_3062e0;
        case 0x30633cu: goto label_30633c;
        default: break;
    }

    ctx->pc = 0x305f88u;

label_305f88:
    // 0x305f88: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x305f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x305f8c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x305f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x305f90: 0x8c620c38  lw          $v0, 0xC38($v1)
    ctx->pc = 0x305f90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0C38u));
    // 0x305f94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x305f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305f98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x305f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x305f9c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305F9Cu;
    {
        const bool branch_taken_0x305f9c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x305FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F9Cu;
        // 0x305fa0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f9c) {
            ctx->pc = 0x305FACu;
            goto label_305fac;
        }
    }
    ctx->pc = 0x305FA4u;
    // 0x305fa4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x305FA4u;
    {
        const bool branch_taken_0x305fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FA4u;
        // 0x305fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305fa4) {
            ctx->pc = 0x305FF0u;
            goto label_305ff0;
        }
    }
    ctx->pc = 0x305FACu;
label_305fac:
    // 0x305fac: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x305facu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x305fb0: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x305fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x305fb4: 0xace52bc0  sw          $a1, 0x2BC0($a3)
    ctx->pc = 0x305fb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x612BC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x612BC0u, _value); } while (0);
    // 0x305fb8: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x305fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x305fbc: 0x24842b40  addiu       $a0, $a0, 0x2B40
    ctx->pc = 0x305fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11072));
    // 0x305fc0: 0x24e72bc0  addiu       $a3, $a3, 0x2BC0
    ctx->pc = 0x305fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11200));
    // 0x305fc4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x305fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x305fc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x305fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x305fcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305fd0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x305fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305fd4: 0x26092b80  addiu       $t1, $s0, 0x2B80
    ctx->pc = 0x305fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11136));
    // 0x305fd8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x305fd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305fdc: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x305FDCu;
    SET_GPR_U32(ctx, 31, 0x305FE4u);
    ctx->pc = 0x305FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305FDCu;
    // 0x305fe0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x305FDCu, 0x305FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305FE4u;
label_305fe4:
    // 0x305fe4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x305FE4u;
    {
        const bool branch_taken_0x305fe4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x305FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FE4u;
        // 0x305fe8: 0x8e022b80  lw          $v0, 0x2B80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305fe4) {
            ctx->pc = 0x305FF0u;
            goto label_305ff0;
        }
    }
    ctx->pc = 0x305FECu;
    // 0x305fec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x305fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_305ff0:
    // 0x305ff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x305ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305ff4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x305ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x305FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FF8u;
        // 0x305ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306000u;
    // 0x306000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x306004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306008: 0xc0c17e2  jal         func_305F88
    ctx->pc = 0x306008u;
    SET_GPR_U32(ctx, 31, 0x306010u);
    ctx->pc = 0x305F88u;
    goto label_305f88;
    ctx->pc = 0x306010u;
label_306010:
    // 0x306010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306014: 0x3e00008  jr          $ra
    ctx->pc = 0x306014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306014u;
        // 0x306018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30601Cu;
    // 0x30601c: 0x0  nop
    ctx->pc = 0x30601cu;
    // NOP
    // 0x306020: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x306020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x306024: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x306024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x306028: 0x8c430c38  lw          $v1, 0xC38($v0)
    ctx->pc = 0x306028u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C38u));
    // 0x30602c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x30602cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306030: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x306030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x306034: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x306034u;
    {
        const bool branch_taken_0x306034 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x306038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306034u;
        // 0x306038: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306034) {
            ctx->pc = 0x306044u;
            goto label_306044;
        }
    }
    ctx->pc = 0x30603Cu;
    // 0x30603c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x30603Cu;
    {
        const bool branch_taken_0x30603c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30603Cu;
        // 0x306040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30603c) {
            ctx->pc = 0x306100u;
            goto label_306100;
        }
    }
    ctx->pc = 0x306044u;
label_306044:
    // 0x306044: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x306044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x306048: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x306048u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x30604c: 0x24e32c00  addiu       $v1, $a3, 0x2C00
    ctx->pc = 0x30604cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 11264));
    // 0x306050: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x306050u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x612C04u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x612C04u, _value); } while (0);
    // 0x306054: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x306054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x306058: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x306058u;
    {
        const bool branch_taken_0x306058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306058u;
        // 0x30605c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306058) {
            ctx->pc = 0x3060A0u;
            goto label_3060a0;
        }
    }
    ctx->pc = 0x306060u;
    // 0x306060: 0x3c090061  lui         $t1, 0x61
    ctx->pc = 0x306060u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)97 << 16));
    // 0x306064: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x306064u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x306068: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x306068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x30606c: 0x0  nop
    ctx->pc = 0x30606cu;
    // NOP
label_306070:
    // 0x306070: 0x290200fc  slti        $v0, $t0, 0xFC
    ctx->pc = 0x306070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x306074: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x306074u;
    {
        const bool branch_taken_0x306074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306074u;
        // 0x306078: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306074) {
            ctx->pc = 0x3060A8u;
            goto label_3060a8;
        }
    }
    ctx->pc = 0x30607Cu;
    // 0x30607c: 0x24e32c00  addiu       $v1, $a3, 0x2C00
    ctx->pc = 0x30607cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 11264));
    // 0x306080: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x306080u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x306084: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x306084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x306088: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x306088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x30608c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x30608cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x306090: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x306090u;
    {
        const bool branch_taken_0x306090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x306090) {
            ctx->pc = 0x306094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306090u;
            // 0x306094: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306070;
        }
    }
    ctx->pc = 0x306098u;
    // 0x306098: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x306098u;
    {
        const bool branch_taken_0x306098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306098u;
        // 0x30609c: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306098) {
            ctx->pc = 0x3060ACu;
            goto label_3060ac;
        }
    }
    ctx->pc = 0x3060A0u;
label_3060a0:
    // 0x3060a0: 0x3c090061  lui         $t1, 0x61
    ctx->pc = 0x3060a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)97 << 16));
    // 0x3060a4: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x3060a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
label_3060a8:
    // 0x3060a8: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x3060a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_3060ac:
    // 0x3060ac: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3060ACu;
    {
        const bool branch_taken_0x3060ac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x3060ac) {
            ctx->pc = 0x3060B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3060ACu;
            // 0x3060b0: 0xace52c00  sw          $a1, 0x2C00($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 11264), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3060C4u;
            goto label_3060c4;
        }
    }
    ctx->pc = 0x3060B4u;
    // 0x3060b4: 0x24e22c00  addiu       $v0, $a3, 0x2C00
    ctx->pc = 0x3060b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 11264));
    // 0x3060b8: 0x240800fb  addiu       $t0, $zero, 0xFB
    ctx->pc = 0x3060b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x3060bc: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x3060bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x3060c0: 0xace52c00  sw          $a1, 0x2C00($a3)
    ctx->pc = 0x3060c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 11264), GPR_U32(ctx, 5));
label_3060c4:
    // 0x3060c4: 0x24e22c00  addiu       $v0, $a3, 0x2C00
    ctx->pc = 0x3060c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 11264));
    // 0x3060c8: 0x25242b40  addiu       $a0, $t1, 0x2B40
    ctx->pc = 0x3060c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 11072));
    // 0x3060cc: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x3060ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x3060d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3060d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3060d4: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x3060d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x3060d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3060d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3060dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3060dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3060e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3060e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3060e4: 0x26092b80  addiu       $t1, $s0, 0x2B80
    ctx->pc = 0x3060e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11136));
    // 0x3060e8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3060e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3060ec: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x3060ECu;
    SET_GPR_U32(ctx, 31, 0x3060F4u);
    ctx->pc = 0x3060F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3060ECu;
    // 0x3060f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3060ECu, 0x3060F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060F4u;
label_3060f4:
    // 0x3060f4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3060F4u;
    {
        const bool branch_taken_0x3060f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3060F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060F4u;
        // 0x3060f8: 0x8e022b80  lw          $v0, 0x2B80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060f4) {
            ctx->pc = 0x306100u;
            goto label_306100;
        }
    }
    ctx->pc = 0x3060FCu;
    // 0x3060fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3060fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_306100:
    // 0x306100: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x306100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306104: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x306104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306108: 0x3e00008  jr          $ra
    ctx->pc = 0x306108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306108u;
        // 0x30610c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306110u;
label_306110:
    // 0x306110: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x306110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x306114: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x306114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x306118: 0x8c430c38  lw          $v1, 0xC38($v0)
    ctx->pc = 0x306118u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C38u));
    // 0x30611c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30611cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x306120: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x306120u;
    {
        const bool branch_taken_0x306120 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x306124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306120u;
        // 0x306124: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306120) {
            ctx->pc = 0x306130u;
            goto label_306130;
        }
    }
    ctx->pc = 0x306128u;
    // 0x306128: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x306128u;
    {
        const bool branch_taken_0x306128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306128u;
        // 0x30612c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306128) {
            ctx->pc = 0x306170u;
            goto label_306170;
        }
    }
    ctx->pc = 0x306130u;
label_306130:
    // 0x306130: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x306130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x306134: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x306134u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x306138: 0x24842b40  addiu       $a0, $a0, 0x2B40
    ctx->pc = 0x306138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11072));
    // 0x30613c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30613cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x306140: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x306140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x306144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x306144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306148: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x306148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30614c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30614cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306150: 0x26092b80  addiu       $t1, $s0, 0x2B80
    ctx->pc = 0x306150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11136));
    // 0x306154: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x306154u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x306158: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x306158u;
    SET_GPR_U32(ctx, 31, 0x306160u);
    ctx->pc = 0x30615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306158u;
    // 0x30615c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x306158u, 0x306160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306160u;
label_306160:
    // 0x306160: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306160u;
    {
        const bool branch_taken_0x306160 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x306160) {
            ctx->pc = 0x306164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306160u;
            // 0x306164: 0x8e022b80  lw          $v0, 0x2B80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306170u;
            goto label_306170;
        }
    }
    ctx->pc = 0x306168u;
    // 0x306168: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x306168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x30616c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30616cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_306170:
    // 0x306170: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x306170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306174: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x306174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306178: 0x3e00008  jr          $ra
    ctx->pc = 0x306178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306178u;
        // 0x30617c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306180u;
label_306180:
    // 0x306180: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x306180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x306184: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x306184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x306188: 0x8c430c38  lw          $v1, 0xC38($v0)
    ctx->pc = 0x306188u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C38u));
    // 0x30618c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30618cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x306190: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x306190u;
    {
        const bool branch_taken_0x306190 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x306194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306190u;
        // 0x306194: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306190) {
            ctx->pc = 0x3061A0u;
            goto label_3061a0;
        }
    }
    ctx->pc = 0x306198u;
    // 0x306198: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x306198u;
    {
        const bool branch_taken_0x306198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306198u;
        // 0x30619c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306198) {
            ctx->pc = 0x3061E0u;
            goto label_3061e0;
        }
    }
    ctx->pc = 0x3061A0u;
label_3061a0:
    // 0x3061a0: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3061a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x3061a4: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x3061a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x3061a8: 0x24842b40  addiu       $a0, $a0, 0x2B40
    ctx->pc = 0x3061a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11072));
    // 0x3061ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3061acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3061b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3061b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3061b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3061b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3061b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3061b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3061bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3061bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3061c0: 0x26092b80  addiu       $t1, $s0, 0x2B80
    ctx->pc = 0x3061c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11136));
    // 0x3061c4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3061c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3061c8: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x3061C8u;
    SET_GPR_U32(ctx, 31, 0x3061D0u);
    ctx->pc = 0x3061CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061C8u;
    // 0x3061cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3061C8u, 0x3061D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061D0u;
label_3061d0:
    // 0x3061d0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3061D0u;
    {
        const bool branch_taken_0x3061d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3061d0) {
            ctx->pc = 0x3061D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3061D0u;
            // 0x3061d4: 0x8e022b80  lw          $v0, 0x2B80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3061E0u;
            goto label_3061e0;
        }
    }
    ctx->pc = 0x3061D8u;
    // 0x3061d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3061d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3061dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3061dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3061e0:
    // 0x3061e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3061e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3061e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3061e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3061e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3061E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3061ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061E8u;
        // 0x3061ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3061E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3061F0u;
label_3061f0:
    // 0x3061f0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3061f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3061f4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3061f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3061f8: 0x8c430c38  lw          $v1, 0xC38($v0)
    ctx->pc = 0x3061f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C38u));
    // 0x3061fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3061fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x306200: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x306200u;
    {
        const bool branch_taken_0x306200 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x306204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306200u;
        // 0x306204: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306200) {
            ctx->pc = 0x306210u;
            goto label_306210;
        }
    }
    ctx->pc = 0x306208u;
    // 0x306208: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x306208u;
    {
        const bool branch_taken_0x306208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306208u;
        // 0x30620c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306208) {
            ctx->pc = 0x306250u;
            goto label_306250;
        }
    }
    ctx->pc = 0x306210u;
label_306210:
    // 0x306210: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x306210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x306214: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x306214u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x306218: 0x24842b40  addiu       $a0, $a0, 0x2B40
    ctx->pc = 0x306218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11072));
    // 0x30621c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30621cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x306220: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x306220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x306224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x306224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x306228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30622c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30622cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306230: 0x26092b80  addiu       $t1, $s0, 0x2B80
    ctx->pc = 0x306230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11136));
    // 0x306234: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x306234u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x306238: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x306238u;
    SET_GPR_U32(ctx, 31, 0x306240u);
    ctx->pc = 0x30623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306238u;
    // 0x30623c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x306238u, 0x306240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306240u;
label_306240:
    // 0x306240: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306240u;
    {
        const bool branch_taken_0x306240 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x306240) {
            ctx->pc = 0x306244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306240u;
            // 0x306244: 0x8e022b80  lw          $v0, 0x2B80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306250u;
            goto label_306250;
        }
    }
    ctx->pc = 0x306248u;
    // 0x306248: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x306248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x30624c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30624cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_306250:
    // 0x306250: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x306250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306254: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x306254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306258: 0x3e00008  jr          $ra
    ctx->pc = 0x306258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306258u;
        // 0x30625c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306260u;
label_306260:
    // 0x306260: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x306260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x306264: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x306264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x306268: 0x8c620c38  lw          $v0, 0xC38($v1)
    ctx->pc = 0x306268u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0C38u));
    // 0x30626c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30626cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306270: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x306270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x306274: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306274u;
    {
        const bool branch_taken_0x306274 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x306278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306274u;
        // 0x306278: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306274) {
            ctx->pc = 0x306284u;
            goto label_306284;
        }
    }
    ctx->pc = 0x30627Cu;
    // 0x30627c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30627Cu;
    {
        const bool branch_taken_0x30627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30627Cu;
        // 0x306280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30627c) {
            ctx->pc = 0x3062CCu;
            goto label_3062cc;
        }
    }
    ctx->pc = 0x306284u;
label_306284:
    // 0x306284: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x306284u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x306288: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x306288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x30628c: 0xace52bc0  sw          $a1, 0x2BC0($a3)
    ctx->pc = 0x30628cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x612BC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x612BC0u, _value); } while (0);
    // 0x306290: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x306290u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x306294: 0x24842b40  addiu       $a0, $a0, 0x2B40
    ctx->pc = 0x306294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11072));
    // 0x306298: 0x24e72bc0  addiu       $a3, $a3, 0x2BC0
    ctx->pc = 0x306298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11200));
    // 0x30629c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30629cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3062a0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3062a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3062a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3062a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3062a8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3062a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3062ac: 0x26092b80  addiu       $t1, $s0, 0x2B80
    ctx->pc = 0x3062acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11136));
    // 0x3062b0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3062b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3062b4: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x3062B4u;
    SET_GPR_U32(ctx, 31, 0x3062BCu);
    ctx->pc = 0x3062B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3062B4u;
    // 0x3062b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3062B4u, 0x3062BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3062BCu;
label_3062bc:
    // 0x3062bc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3062BCu;
    {
        const bool branch_taken_0x3062bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3062bc) {
            ctx->pc = 0x3062C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3062BCu;
            // 0x3062c0: 0x8e022b80  lw          $v0, 0x2B80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3062CCu;
            goto label_3062cc;
        }
    }
    ctx->pc = 0x3062C4u;
    // 0x3062c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3062c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3062c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3062c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3062cc:
    // 0x3062cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3062ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3062d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3062d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3062d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3062D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3062D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062D4u;
        // 0x3062d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3062D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3062DCu;
    // 0x3062dc: 0x0  nop
    ctx->pc = 0x3062dcu;
    // NOP
label_3062e0:
    // 0x3062e0: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x3062e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x3062e4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3062e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3062e8: 0x8c620c38  lw          $v0, 0xC38($v1)
    ctx->pc = 0x3062e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0C38u));
    // 0x3062ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3062ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3062f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3062f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3062f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3062F4u;
    {
        const bool branch_taken_0x3062f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3062F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062F4u;
        // 0x3062f8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062f4) {
            ctx->pc = 0x306304u;
            goto label_306304;
        }
    }
    ctx->pc = 0x3062FCu;
    // 0x3062fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3062FCu;
    {
        const bool branch_taken_0x3062fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062FCu;
        // 0x306300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062fc) {
            ctx->pc = 0x30634Cu;
            goto label_30634c;
        }
    }
    ctx->pc = 0x306304u;
label_306304:
    // 0x306304: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x306304u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x306308: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x306308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x30630c: 0xace52bc0  sw          $a1, 0x2BC0($a3)
    ctx->pc = 0x30630cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x612BC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x612BC0u, _value); } while (0);
    // 0x306310: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x306310u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x306314: 0x24842b40  addiu       $a0, $a0, 0x2B40
    ctx->pc = 0x306314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11072));
    // 0x306318: 0x24e72bc0  addiu       $a3, $a3, 0x2BC0
    ctx->pc = 0x306318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11200));
    // 0x30631c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30631cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x306320: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x306320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x306324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x306324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306328: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x306328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30632c: 0x26092b80  addiu       $t1, $s0, 0x2B80
    ctx->pc = 0x30632cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11136));
    // 0x306330: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x306330u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x306334: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x306334u;
    SET_GPR_U32(ctx, 31, 0x30633Cu);
    ctx->pc = 0x306338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306334u;
    // 0x306338: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x306334u, 0x30633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30633Cu;
label_30633c:
    // 0x30633c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30633Cu;
    {
        const bool branch_taken_0x30633c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x30633c) {
            ctx->pc = 0x306340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30633Cu;
            // 0x306340: 0x8e022b80  lw          $v0, 0x2B80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30634Cu;
            goto label_30634c;
        }
    }
    ctx->pc = 0x306344u;
    // 0x306344: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x306344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x306348: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x306348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30634c:
    // 0x30634c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30634cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306350: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x306350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306354: 0x3e00008  jr          $ra
    ctx->pc = 0x306354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306354u;
        // 0x306358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30635Cu;
    // 0x30635c: 0x0  nop
    ctx->pc = 0x30635cu;
    // NOP
    ctx->pc = 0x306360u;
}
