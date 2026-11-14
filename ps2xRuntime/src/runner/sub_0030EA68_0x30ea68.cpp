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

// Function: sub_0030EA68
// Address: 0x30ea68 - 0x30ebf8
void sub_0030EA68_0x30ea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030EA68_0x30ea68");
#endif

    switch (ctx->pc) {
        case 0x30eab4u: goto label_30eab4;
        case 0x30eaf8u: goto label_30eaf8;
        case 0x30eb08u: goto label_30eb08;
        case 0x30eb78u: goto label_30eb78;
        case 0x30ebb8u: goto label_30ebb8;
        case 0x30ebc8u: goto label_30ebc8;
        case 0x30ebd8u: goto label_30ebd8;
        default: break;
    }

    ctx->pc = 0x30ea68u;

    // 0x30ea68: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x30ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x30ea6c: 0x80bf6e4  j           func_2FDB90
    ctx->pc = 0x30EA6Cu;
    ctx->pc = 0x30EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EA6Cu;
    // 0x30ea70: 0x8c442268  lw          $a0, 0x2268($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB90u;
    sub_002FDB90_0x2fdb90(rdram, ctx, runtime); return;
    ctx->pc = 0x30EA74u;
    // 0x30ea74: 0x0  nop
    ctx->pc = 0x30ea74u;
    // NOP
    // 0x30ea78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30ea78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30ea7c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x30ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x30ea80: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x30ea80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x30ea84: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x30ea84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x30ea88: 0x24716840  addiu       $s1, $v1, 0x6840
    ctx->pc = 0x30ea88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 26688));
    // 0x30ea8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30ea8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30ea90: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x30ea90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x30ea94: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x30ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x616864u));
    // 0x30ea98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30EA98u;
    {
        const bool branch_taken_0x30ea98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA98u;
        // 0x30ea9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea98) {
            ctx->pc = 0x30EAA8u;
            goto label_30eaa8;
        }
    }
    ctx->pc = 0x30EAA0u;
    // 0x30eaa0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x30EAA0u;
    {
        const bool branch_taken_0x30eaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAA0u;
        // 0x30eaa4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eaa0) {
            ctx->pc = 0x30EB1Cu;
            goto label_30eb1c;
        }
    }
    ctx->pc = 0x30EAA8u;
label_30eaa8:
    // 0x30eaa8: 0x3c12004f  lui         $s2, 0x4F
    ctx->pc = 0x30eaa8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)79 << 16));
    // 0x30eaac: 0xc0bf6ec  jal         func_2FDBB0
    ctx->pc = 0x30EAACu;
    SET_GPR_U32(ctx, 31, 0x30EAB4u);
    ctx->pc = 0x30EAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EAACu;
    // 0x30eab0: 0x8e442264  lw          $a0, 0x2264($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBB0u, 0x30EAACu, 0x30EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAB4u;
label_30eab4:
    // 0x30eab4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30EAB4u;
    {
        const bool branch_taken_0x30eab4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAB4u;
        // 0x30eab8: 0x3c070061  lui         $a3, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eab4) {
            ctx->pc = 0x30EAC4u;
            goto label_30eac4;
        }
    }
    ctx->pc = 0x30EABCu;
    // 0x30eabc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x30EABCu;
    {
        const bool branch_taken_0x30eabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EABCu;
        // 0x30eac0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eabc) {
            ctx->pc = 0x30EB1Cu;
            goto label_30eb1c;
        }
    }
    ctx->pc = 0x30EAC4u;
label_30eac4:
    // 0x30eac4: 0x3c090061  lui         $t1, 0x61
    ctx->pc = 0x30eac4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)97 << 16));
    // 0x30eac8: 0x24e768c0  addiu       $a3, $a3, 0x68C0
    ctx->pc = 0x30eac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26816));
    // 0x30eacc: 0x3c0b0031  lui         $t3, 0x31
    ctx->pc = 0x30eaccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)49 << 16));
    // 0x30ead0: 0xacf00014  sw          $s0, 0x14($a3)
    ctx->pc = 0x30ead0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 16));
    // 0x30ead4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30ead4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ead8: 0x25297e00  addiu       $t1, $t1, 0x7E00
    ctx->pc = 0x30ead8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32256));
    // 0x30eadc: 0x256bea68  addiu       $t3, $t3, -0x1598
    ctx->pc = 0x30eadcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961768));
    // 0x30eae0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x30eae4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x30eae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30eae8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30eae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30eaec: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x30eaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x30eaf0: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x30EAF0u;
    SET_GPR_U32(ctx, 31, 0x30EAF8u);
    ctx->pc = 0x30EAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EAF0u;
    // 0x30eaf4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x30EAF0u, 0x30EAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAF8u;
label_30eaf8:
    // 0x30eaf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30EAF8u;
    {
        const bool branch_taken_0x30eaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAF8u;
        // 0x30eafc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eaf8) {
            ctx->pc = 0x30EB10u;
            goto label_30eb10;
        }
    }
    ctx->pc = 0x30EB00u;
    // 0x30eb00: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x30EB00u;
    SET_GPR_U32(ctx, 31, 0x30EB08u);
    ctx->pc = 0x30EB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EB00u;
    // 0x30eb04: 0x8e442264  lw          $a0, 0x2264($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x30EB00u, 0x30EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB08u;
label_30eb08:
    // 0x30eb08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30EB08u;
    {
        const bool branch_taken_0x30eb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB08u;
        // 0x30eb0c: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb08) {
            ctx->pc = 0x30EB1Cu;
            goto label_30eb1c;
        }
    }
    ctx->pc = 0x30EB10u;
label_30eb10:
    // 0x30eb10: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x30eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x30eb14: 0xac622260  sw          $v0, 0x2260($v1)
    ctx->pc = 0x30eb14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4F2260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F2260u, _value); } while (0);
    // 0x30eb18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30eb18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30eb1c:
    // 0x30eb1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30eb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30eb20: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x30eb20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30eb24: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x30eb24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30eb28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30eb28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30eb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x30EB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB2Cu;
        // 0x30eb30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30EB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30EB34u;
    // 0x30eb34: 0x0  nop
    ctx->pc = 0x30eb34u;
    // NOP
    // 0x30eb38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30eb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30eb3c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x30eb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x30eb40: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x30eb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x30eb44: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x30eb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x30eb48: 0x24726840  addiu       $s2, $v1, 0x6840
    ctx->pc = 0x30eb48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 26688));
    // 0x30eb4c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x30eb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x30eb50: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x30eb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x30eb54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x30eb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x30eb58: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x30eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x616864u));
    // 0x30eb5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30EB5Cu;
    {
        const bool branch_taken_0x30eb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB5Cu;
        // 0x30eb60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb5c) {
            ctx->pc = 0x30EB6Cu;
            goto label_30eb6c;
        }
    }
    ctx->pc = 0x30EB64u;
    // 0x30eb64: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x30EB64u;
    {
        const bool branch_taken_0x30eb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB64u;
        // 0x30eb68: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb64) {
            ctx->pc = 0x30EBDCu;
            goto label_30ebdc;
        }
    }
    ctx->pc = 0x30EB6Cu;
label_30eb6c:
    // 0x30eb6c: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x30eb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
    // 0x30eb70: 0xc0bf6ec  jal         func_2FDBB0
    ctx->pc = 0x30EB70u;
    SET_GPR_U32(ctx, 31, 0x30EB78u);
    ctx->pc = 0x30EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EB70u;
    // 0x30eb74: 0x8e042264  lw          $a0, 0x2264($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBB0u, 0x30EB70u, 0x30EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB78u;
label_30eb78:
    // 0x30eb78: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30EB78u;
    {
        const bool branch_taken_0x30eb78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB78u;
        // 0x30eb7c: 0x3c070061  lui         $a3, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb78) {
            ctx->pc = 0x30EB88u;
            goto label_30eb88;
        }
    }
    ctx->pc = 0x30EB80u;
    // 0x30eb80: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x30EB80u;
    {
        const bool branch_taken_0x30eb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB80u;
        // 0x30eb84: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb80) {
            ctx->pc = 0x30EBDCu;
            goto label_30ebdc;
        }
    }
    ctx->pc = 0x30EB88u;
label_30eb88:
    // 0x30eb88: 0x3c130061  lui         $s3, 0x61
    ctx->pc = 0x30eb88u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)97 << 16));
    // 0x30eb8c: 0x24e768c0  addiu       $a3, $a3, 0x68C0
    ctx->pc = 0x30eb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26816));
    // 0x30eb90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30eb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eb94: 0xacf10004  sw          $s1, 0x4($a3)
    ctx->pc = 0x30eb94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 17));
    // 0x30eb98: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x30eb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x30eb9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x30eba0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30eba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eba4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x30eba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x30eba8: 0x26697e00  addiu       $t1, $s3, 0x7E00
    ctx->pc = 0x30eba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 32256));
    // 0x30ebac: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x30ebacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30ebb0: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x30EBB0u;
    SET_GPR_U32(ctx, 31, 0x30EBB8u);
    ctx->pc = 0x30EBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EBB0u;
    // 0x30ebb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x30EBB0u, 0x30EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EBB8u;
label_30ebb8:
    // 0x30ebb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30EBB8u;
    {
        const bool branch_taken_0x30ebb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ebb8) {
            ctx->pc = 0x30EBD0u;
            goto label_30ebd0;
        }
    }
    ctx->pc = 0x30EBC0u;
    // 0x30ebc0: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x30EBC0u;
    SET_GPR_U32(ctx, 31, 0x30EBC8u);
    ctx->pc = 0x30EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EBC0u;
    // 0x30ebc4: 0x8e042264  lw          $a0, 0x2264($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x30EBC0u, 0x30EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EBC8u;
label_30ebc8:
    // 0x30ebc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30EBC8u;
    {
        const bool branch_taken_0x30ebc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBC8u;
        // 0x30ebcc: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ebc8) {
            ctx->pc = 0x30EBDCu;
            goto label_30ebdc;
        }
    }
    ctx->pc = 0x30EBD0u;
label_30ebd0:
    // 0x30ebd0: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x30EBD0u;
    SET_GPR_U32(ctx, 31, 0x30EBD8u);
    ctx->pc = 0x30EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EBD0u;
    // 0x30ebd4: 0x8e042264  lw          $a0, 0x2264($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x30EBD0u, 0x30EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EBD8u;
label_30ebd8:
    // 0x30ebd8: 0x8e627e00  lw          $v0, 0x7E00($s3)
    ctx->pc = 0x30ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32256)));
label_30ebdc:
    // 0x30ebdc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x30ebdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30ebe0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x30ebe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ebe4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x30ebe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ebe8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x30ebe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ebec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30ebecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ebf0: 0x3e00008  jr          $ra
    ctx->pc = 0x30EBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBF0u;
        // 0x30ebf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30EBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30EBF8u;
}
