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

// Function: sub_002FBD88
// Address: 0x2fbd88 - 0x2fbe28
void sub_002FBD88_0x2fbd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBD88_0x2fbd88");
#endif

    switch (ctx->pc) {
        case 0x2fbda0u: goto label_2fbda0;
        default: break;
    }

    ctx->pc = 0x2fbd88u;

    // 0x2fbd88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fbd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fbd8c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x2fbd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x2fbd90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2fbd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fbd94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fbd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fbd98: 0xc0beca4  jal         func_2FB290
    ctx->pc = 0x2FBD98u;
    SET_GPR_U32(ctx, 31, 0x2FBDA0u);
    ctx->pc = 0x2FBD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBD98u;
    // 0x2fbd9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB290u, 0x2FBD98u, 0x2FBDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBDA0u;
label_2fbda0:
    // 0x2fbda0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fbda0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbda4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2fbda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbda8: 0x38830002  xori        $v1, $a0, 0x2
    ctx->pc = 0x2fbda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x2fbdac: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FBDACu;
    {
        const bool branch_taken_0x2fbdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDACu;
        // 0x2fbdb0: 0x2c850002  sltiu       $a1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdac) {
            ctx->pc = 0x2FBE1Cu;
            goto label_2fbe1c;
        }
    }
    ctx->pc = 0x2FBDB4u;
    // 0x2fbdb4: 0x14a0001a  bnez        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FBDB4u;
    {
        const bool branch_taken_0x2fbdb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDB4u;
        // 0x2fbdb8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdb4) {
            ctx->pc = 0x2FBE20u;
            goto label_2fbe20;
        }
    }
    ctx->pc = 0x2FBDBCu;
    // 0x2fbdbc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2fbdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fbdc0: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FBDC0u;
    {
        const bool branch_taken_0x2fbdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDC0u;
        // 0x2fbdc4: 0x38830004  xori        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdc0) {
            ctx->pc = 0x2FBE20u;
            goto label_2fbe20;
        }
    }
    ctx->pc = 0x2FBDC8u;
    // 0x2fbdc8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FBDC8u;
    {
        const bool branch_taken_0x2fbdc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDC8u;
        // 0x2fbdcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdc8) {
            ctx->pc = 0x2FBE20u;
            goto label_2fbe20;
        }
    }
    ctx->pc = 0x2FBDD0u;
    // 0x2fbdd0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2fbdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fbdd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fbdd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbdd8: 0x4800011  bltz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FBDD8u;
    {
        const bool branch_taken_0x2fbdd8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2FBDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDD8u;
        // 0x2fbddc: 0x28830020  slti        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdd8) {
            ctx->pc = 0x2FBE20u;
            goto label_2fbe20;
        }
    }
    ctx->pc = 0x2FBDE0u;
    // 0x2fbde0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2FBDE0u;
    {
        const bool branch_taken_0x2fbde0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDE0u;
        // 0x2fbde4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbde0) {
            ctx->pc = 0x2FBE20u;
            goto label_2fbe20;
        }
    }
    ctx->pc = 0x2FBDE8u;
    // 0x2fbde8: 0x2882003d  slti        $v0, $a0, 0x3D
    ctx->pc = 0x2fbde8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x2fbdec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBDECu;
    {
        const bool branch_taken_0x2fbdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDECu;
        // 0x2fbdf0: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdec) {
            ctx->pc = 0x2FBE08u;
            goto label_2fbe08;
        }
    }
    ctx->pc = 0x2FBDF4u;
    // 0x2fbdf4: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2fbdf4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbdf8: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x2fbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x2fbdfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FBDFCu;
    {
        const bool branch_taken_0x2fbdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDFCu;
        // 0x2fbe00: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdfc) {
            ctx->pc = 0x2FBE14u;
            goto label_2fbe14;
        }
    }
    ctx->pc = 0x2FBE04u;
    // 0x2fbe04: 0x0  nop
    ctx->pc = 0x2fbe04u;
    // NOP
label_2fbe08:
    // 0x2fbe08: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2fbe08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbe0c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2fbe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fbe10: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x2fbe10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_2fbe14:
    // 0x2fbe14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fbe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fbe18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fbe18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2fbe1c:
    // 0x2fbe1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fbe1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2fbe20:
    // 0x2fbe20: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE20u;
        // 0x2fbe24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBE28u;
}
