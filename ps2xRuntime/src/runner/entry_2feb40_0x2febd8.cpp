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

// Function: entry_2feb40
// Address: 0x2feb40 - 0x2febd8
void entry_2feb40_0x2febd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2feb40_0x2febd8");
#endif

    switch (ctx->pc) {
        case 0x2feb54u: goto label_2feb54;
        case 0x2feb68u: goto label_2feb68;
        case 0x2febc4u: goto label_2febc4;
        default: break;
    }

    ctx->pc = 0x2feb40u;

    // 0x2feb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2feb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2feb44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2feb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2feb48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2feb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2feb4c: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x2feb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x2feb50: 0xc  syscall     0
    ctx->pc = 0x2feb50u;
    ctx->pc = 0x2FEB54u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2feb54:
    // 0x2feb54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2feb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb58: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEB58u;
    {
        const bool branch_taken_0x2feb58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2FEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB58u;
        // 0x2feb5c: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb58) {
            ctx->pc = 0x2FEB70u;
            goto label_2feb70;
        }
    }
    ctx->pc = 0x2FEB60u;
    // 0x2feb60: 0xc0bf6b8  jal         func_2FDAE0
    ctx->pc = 0x2FEB60u;
    SET_GPR_U32(ctx, 31, 0x2FEB68u);
    ctx->pc = 0x2FDAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDAE0u, 0x2FEB60u, 0x2FEB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEB68u;
label_2feb68:
    // 0x2feb68: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2FEB68u;
    {
        const bool branch_taken_0x2feb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB68u;
        // 0x2feb6c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb68) {
            ctx->pc = 0x2FEBCCu;
            goto label_2febcc;
        }
    }
    ctx->pc = 0x2FEB70u;
label_2feb70:
    // 0x2feb70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FEB70u;
    {
        const bool branch_taken_0x2feb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB70u;
        // 0x2feb74: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb70) {
            ctx->pc = 0x2FEB84u;
            goto label_2feb84;
        }
    }
    ctx->pc = 0x2FEB78u;
    // 0x2feb78: 0x8c430b78  lw          $v1, 0xB78($v0)
    ctx->pc = 0x2feb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2936)));
    // 0x2feb7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEB7Cu;
    {
        const bool branch_taken_0x2feb7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB7Cu;
        // 0x2feb80: 0x3c030061  lui         $v1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb7c) {
            ctx->pc = 0x2FEB8Cu;
            goto label_2feb8c;
        }
    }
    ctx->pc = 0x2FEB84u;
label_2feb84:
    // 0x2feb84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2FEB84u;
    {
        const bool branch_taken_0x2feb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB84u;
        // 0x2feb88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb84) {
            ctx->pc = 0x2FEBC8u;
            goto label_2febc8;
        }
    }
    ctx->pc = 0x2FEB8Cu;
label_2feb8c:
    // 0x2feb8c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2feb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x2feb90: 0x2463ef28  addiu       $v1, $v1, -0x10D8
    ctx->pc = 0x2feb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962984));
    // 0x2feb94: 0x8ca4ef20  lw          $a0, -0x10E0($a1)
    ctx->pc = 0x2feb94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x60EF20u));
    // 0x2feb98: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2feb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2feb9c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2feb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2feba0: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x2feba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x2feba4: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x2feba4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2feba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2feba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2febac: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x2febacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2febb0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2febb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2febb4: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x2febb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x2febb8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2febb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2febbc: 0xc0bf6e4  jal         func_2FDB90
    ctx->pc = 0x2FEBBCu;
    SET_GPR_U32(ctx, 31, 0x2FEBC4u);
    ctx->pc = 0x2FEBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEBBCu;
    // 0x2febc0: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB90u, 0x2FEBBCu, 0x2FEBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEBC4u;
label_2febc4:
    // 0x2febc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2febc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2febc8:
    // 0x2febc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2febc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2febcc:
    // 0x2febcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2febccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2febd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBD0u;
        // 0x2febd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEBD8u;
}
