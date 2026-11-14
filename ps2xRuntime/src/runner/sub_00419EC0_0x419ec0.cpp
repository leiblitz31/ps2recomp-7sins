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

// Function: sub_00419EC0
// Address: 0x419ec0 - 0x419f18
void sub_00419EC0_0x419ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419EC0_0x419ec0");
#endif

    switch (ctx->pc) {
        case 0x419ec0u: goto label_419ec0;
        case 0x419ec4u: goto label_419ec4;
        case 0x419ec8u: goto label_419ec8;
        case 0x419eccu: goto label_419ecc;
        case 0x419ed0u: goto label_419ed0;
        case 0x419ed4u: goto label_419ed4;
        case 0x419ed8u: goto label_419ed8;
        case 0x419edcu: goto label_419edc;
        case 0x419ee0u: goto label_419ee0;
        case 0x419ee4u: goto label_419ee4;
        case 0x419ee8u: goto label_419ee8;
        case 0x419eecu: goto label_419eec;
        case 0x419ef0u: goto label_419ef0;
        case 0x419ef4u: goto label_419ef4;
        case 0x419ef8u: goto label_419ef8;
        case 0x419efcu: goto label_419efc;
        case 0x419f00u: goto label_419f00;
        case 0x419f04u: goto label_419f04;
        case 0x419f08u: goto label_419f08;
        case 0x419f0cu: goto label_419f0c;
        case 0x419f10u: goto label_419f10;
        case 0x419f14u: goto label_419f14;
        default: break;
    }

    ctx->pc = 0x419ec0u;

label_419ec0:
    // 0x419ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x419ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_419ec4:
    // 0x419ec4: 0x8f83be00  lw          $v1, -0x4200($gp)
    ctx->pc = 0x419ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950400)));
label_419ec8:
    // 0x419ec8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x419ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_419ecc:
    // 0x419ecc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x419eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_419ed0:
    // 0x419ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_419ed4:
    // 0x419ed4: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x419ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_419ed8:
    // 0x419ed8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x419ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_419edc:
    // 0x419edc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x419edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_419ee0:
    // 0x419ee0: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x419ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_419ee4:
    // 0x419ee4: 0x34a5000e  ori         $a1, $a1, 0xE
    ctx->pc = 0x419ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14);
label_419ee8:
    // 0x419ee8: 0x40f809  jalr        $v0
label_419eec:
    if (ctx->pc == 0x419EECu) {
        ctx->pc = 0x419EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419EE8u;
        // 0x419eec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419EF0u;
        goto label_419ef0;
    }
    ctx->pc = 0x419EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x419EF0u);
        ctx->pc = 0x419EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419EE8u;
        // 0x419eec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419EE8u, 0x419EF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x419EF0u;
label_419ef0:
    // 0x419ef0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x419ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419ef4:
    // 0x419ef4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_419ef8:
    if (ctx->pc == 0x419EF8u) {
        ctx->pc = 0x419EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419EF4u;
        // 0x419ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419EFCu;
        goto label_419efc;
    }
    ctx->pc = 0x419EF4u;
    {
        const bool branch_taken_0x419ef4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x419EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419EF4u;
        // 0x419ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419ef4) {
            ctx->pc = 0x419F08u;
            goto label_419f08;
        }
    }
    ctx->pc = 0x419EFCu;
label_419efc:
    // 0x419efc: 0xc106544  jal         func_419510
label_419f00:
    if (ctx->pc == 0x419F00u) {
        ctx->pc = 0x419F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419EFCu;
        // 0x419f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419F04u;
        goto label_419f04;
    }
    ctx->pc = 0x419EFCu;
    SET_GPR_U32(ctx, 31, 0x419F04u);
    ctx->pc = 0x419F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419EFCu;
    // 0x419f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419510u, 0x419EFCu, 0x419F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419F04u;
label_419f04:
    // 0x419f04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x419f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419f08:
    // 0x419f08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x419f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_419f0c:
    // 0x419f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_419f10:
    // 0x419f10: 0x3e00008  jr          $ra
label_419f14:
    if (ctx->pc == 0x419F14u) {
        ctx->pc = 0x419F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419F10u;
        // 0x419f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419F18u;
        goto label_fallthrough_0x419f10;
    }
    ctx->pc = 0x419F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419F10u;
        // 0x419f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x419f10:
    ctx->pc = 0x419F18u;
}
