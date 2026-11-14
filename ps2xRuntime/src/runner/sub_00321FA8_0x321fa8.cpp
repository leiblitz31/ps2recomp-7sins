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

// Function: sub_00321FA8
// Address: 0x321fa8 - 0x322048
void sub_00321FA8_0x321fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321FA8_0x321fa8");
#endif

    switch (ctx->pc) {
        case 0x321fd0u: goto label_321fd0;
        case 0x322000u: goto label_322000;
        case 0x322024u: goto label_322024;
        default: break;
    }

    ctx->pc = 0x321fa8u;

    // 0x321fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x321fac: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x321facu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x321fb0: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x321fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x321fb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x321fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x321fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x321fbc: 0x24c62e28  addiu       $a2, $a2, 0x2E28
    ctx->pc = 0x321fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11816));
    // 0x321fc0: 0x24e72e80  addiu       $a3, $a3, 0x2E80
    ctx->pc = 0x321fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11904));
    // 0x321fc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321fc8: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x321FC8u;
    SET_GPR_U32(ctx, 31, 0x321FD0u);
    ctx->pc = 0x321FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321FC8u;
    // 0x321fcc: 0x24050112  addiu       $a1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x321FC8u, 0x321FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FD0u;
label_321fd0:
    // 0x321fd0: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x321fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x321fd4: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x321fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x321fd8: 0xae02b1a8  sw          $v0, -0x4E58($s0)
    ctx->pc = 0x321fd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61B1A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B1A8u, _value); } while (0);
    // 0x321fdc: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x321fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x321fe0: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x321fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x321fe4: 0x2610b1a8  addiu       $s0, $s0, -0x4E58
    ctx->pc = 0x321fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947240));
    // 0x321fe8: 0x25082ad8  addiu       $t0, $t0, 0x2AD8
    ctx->pc = 0x321fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10968));
    // 0x321fec: 0x24c62ac8  addiu       $a2, $a2, 0x2AC8
    ctx->pc = 0x321fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10952));
    // 0x321ff0: 0x24e72ca0  addiu       $a3, $a3, 0x2CA0
    ctx->pc = 0x321ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11424));
    // 0x321ff4: 0x24050112  addiu       $a1, $zero, 0x112
    ctx->pc = 0x321ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    // 0x321ff8: 0xc0e28ec  jal         func_38A3B0
    ctx->pc = 0x321FF8u;
    SET_GPR_U32(ctx, 31, 0x322000u);
    ctx->pc = 0x321FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321FF8u;
    // 0x321ffc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x321FF8u, 0x322000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322000u;
label_322000:
    // 0x322000: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x322000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x322004: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x322004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x322008: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x322008u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x32200c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32200cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x322010: 0x24a51bc0  addiu       $a1, $a1, 0x1BC0
    ctx->pc = 0x322010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7104));
    // 0x322014: 0x24c627f0  addiu       $a2, $a2, 0x27F0
    ctx->pc = 0x322014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10224));
    // 0x322018: 0x24e72998  addiu       $a3, $a3, 0x2998
    ctx->pc = 0x322018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10648));
    // 0x32201c: 0xc0e2910  jal         func_38A440
    ctx->pc = 0x32201Cu;
    SET_GPR_U32(ctx, 31, 0x322024u);
    ctx->pc = 0x322020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32201Cu;
    // 0x322020: 0x24040112  addiu       $a0, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A440u, 0x32201Cu, 0x322024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322024u;
label_322024:
    // 0x322024: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x322024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x322028: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x322028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x32202c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32202cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x322030: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x322030u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x322034: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x322034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322038: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x322038u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x32203c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32203cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322040: 0x3e00008  jr          $ra
    ctx->pc = 0x322040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322040u;
        // 0x322044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322048u;
}
