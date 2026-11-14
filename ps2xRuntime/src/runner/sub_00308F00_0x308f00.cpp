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

// Function: sub_00308F00
// Address: 0x308f00 - 0x308fa0
void sub_00308F00_0x308f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308F00_0x308f00");
#endif

    switch (ctx->pc) {
        case 0x308f68u: goto label_308f68;
        default: break;
    }

    ctx->pc = 0x308f00u;

    // 0x308f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x308f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x308f04: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x308f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x308f08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308f0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x308f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x308f10: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x308f10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x308f14: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x308F14u;
    {
        const bool branch_taken_0x308f14 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x308F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F14u;
        // 0x308f18: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f14) {
            ctx->pc = 0x308F2Cu;
            goto label_308f2c;
        }
    }
    ctx->pc = 0x308F1Cu;
    // 0x308f1c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x308f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x308f20: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x308f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x308f24: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x308F24u;
    {
        const bool branch_taken_0x308f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x308f24) {
            ctx->pc = 0x308F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308F24u;
            // 0x308f28: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308F38u;
            goto label_308f38;
        }
    }
    ctx->pc = 0x308F2Cu;
label_308f2c:
    // 0x308f2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x308f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x308f30: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x308F30u;
    {
        const bool branch_taken_0x308f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F30u;
        // 0x308f34: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f30) {
            ctx->pc = 0x308F8Cu;
            goto label_308f8c;
        }
    }
    ctx->pc = 0x308F38u;
label_308f38:
    // 0x308f38: 0x24512228  addiu       $s1, $v0, 0x2228
    ctx->pc = 0x308f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8744));
    // 0x308f3c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x308f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x308f40: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x308F40u;
    {
        const bool branch_taken_0x308f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x308f40) {
            ctx->pc = 0x308F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308F40u;
            // 0x308f44: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308F54u;
            goto label_308f54;
        }
    }
    ctx->pc = 0x308F48u;
    // 0x308f48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x308f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x308f4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x308F4Cu;
    {
        const bool branch_taken_0x308f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F4Cu;
        // 0x308f50: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f4c) {
            ctx->pc = 0x308F8Cu;
            goto label_308f8c;
        }
    }
    ctx->pc = 0x308F54u;
label_308f54:
    // 0x308f54: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x308f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x308f58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308F58u;
    {
        const bool branch_taken_0x308f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308f58) {
            ctx->pc = 0x308F68u;
            goto label_308f68;
        }
    }
    ctx->pc = 0x308F60u;
    // 0x308f60: 0xc0c22a6  jal         func_308A98
    ctx->pc = 0x308F60u;
    SET_GPR_U32(ctx, 31, 0x308F68u);
    ctx->pc = 0x308F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308F60u;
    // 0x308f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308A98u, 0x308F60u, 0x308F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308F68u;
label_308f68:
    // 0x308f68: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x308f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x308f6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x308f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308f70: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x308f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x308f74: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x308f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x308f78: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x308f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x308f7c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x308f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x308f80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x308f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x308f84: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x308f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x308f88: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x308f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_308f8c:
    // 0x308f8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x308f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308f90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x308f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308f98: 0x3e00008  jr          $ra
    ctx->pc = 0x308F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F98u;
        // 0x308f9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308FA0u;
}
