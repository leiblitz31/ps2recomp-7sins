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

// Function: sub_002EBDB8
// Address: 0x2ebdb8 - 0x2ebe48
void sub_002EBDB8_0x2ebdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBDB8_0x2ebdb8");
#endif

    switch (ctx->pc) {
        case 0x2ebdf8u: goto label_2ebdf8;
        case 0x2ebe0cu: goto label_2ebe0c;
        case 0x2ebe20u: goto label_2ebe20;
        default: break;
    }

    ctx->pc = 0x2ebdb8u;

    // 0x2ebdb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ebdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ebdbc: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2ebdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2ebdc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ebdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ebdc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdc8: 0x2442bd78  addiu       $v0, $v0, -0x4288
    ctx->pc = 0x2ebdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950264));
    // 0x2ebdcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ebdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebdd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ebdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ebdd4: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x2ebdd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x2ebdd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ebdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ebddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ebddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebde0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2ebde0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2ebde4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ebde4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebde8: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2ebde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x2ebdec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ebdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ebdf0: 0xc0baeea  jal         func_2EBBA8
    ctx->pc = 0x2EBDF0u;
    SET_GPR_U32(ctx, 31, 0x2EBDF8u);
    ctx->pc = 0x2EBDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBDF0u;
    // 0x2ebdf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBBA8u, 0x2EBDF0u, 0x2EBDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBDF8u;
label_2ebdf8:
    // 0x2ebdf8: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x2ebdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x2ebdfc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ebdfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe00: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2ebe00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ebe04: 0xc0baeea  jal         func_2EBBA8
    ctx->pc = 0x2EBE04u;
    SET_GPR_U32(ctx, 31, 0x2EBE0Cu);
    ctx->pc = 0x2EBE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBE04u;
    // 0x2ebe08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBBA8u, 0x2EBE04u, 0x2EBE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBE0Cu;
label_2ebe0c:
    // 0x2ebe0c: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x2ebe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    // 0x2ebe10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ebe10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe14: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ebe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ebe18: 0xc0baeea  jal         func_2EBBA8
    ctx->pc = 0x2EBE18u;
    SET_GPR_U32(ctx, 31, 0x2EBE20u);
    ctx->pc = 0x2EBE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBE18u;
    // 0x2ebe1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBBA8u, 0x2EBE18u, 0x2EBE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBE20u;
label_2ebe20:
    // 0x2ebe20: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x2ebe20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x2ebe24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ebe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ebe28: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x2ebe28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x2ebe2c: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x2ebe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x2ebe30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ebe30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ebe34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebe34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebe38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ebe38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebe3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE3Cu;
        // 0x2ebe40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBE44u;
    // 0x2ebe44: 0x0  nop
    ctx->pc = 0x2ebe44u;
    // NOP
    ctx->pc = 0x2ebe48u;
}
