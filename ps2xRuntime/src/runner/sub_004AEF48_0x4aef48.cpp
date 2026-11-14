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

// Function: sub_004AEF48
// Address: 0x4aef48 - 0x4af008
void sub_004AEF48_0x4aef48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEF48_0x4aef48");
#endif

    switch (ctx->pc) {
        case 0x4aef80u: goto label_4aef80;
        case 0x4aef90u: goto label_4aef90;
        case 0x4aefc4u: goto label_4aefc4;
        default: break;
    }

    ctx->pc = 0x4aef48u;

    // 0x4aef48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4aef48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4aef4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4aef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aef50: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4aef50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4aef54: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4aef54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4aef58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4aef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4aef5c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x4aef5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4aef60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4aef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4aef64: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x4aef64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4aef68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4aef68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4aef6c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x4aef6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4aef70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aef70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aef74: 0x247399c0  addiu       $s3, $v1, -0x6640
    ctx->pc = 0x4aef74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941120));
    // 0x4aef78: 0xaf82c238  sw          $v0, -0x3DC8($gp)
    ctx->pc = 0x4aef78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951480), GPR_U32(ctx, 2));
    // 0x4aef7c: 0x8f82b8a4  lw          $v0, -0x475C($gp)
    ctx->pc = 0x4aef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949028)));
label_4aef80:
    // 0x4aef80: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AEF80u;
    {
        const bool branch_taken_0x4aef80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4AEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEF80u;
        // 0x4aef84: 0x8f82c238  lw          $v0, -0x3DC8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aef80) {
            ctx->pc = 0x4AEF94u;
            goto label_4aef94;
        }
    }
    ctx->pc = 0x4AEF88u;
    // 0x4aef88: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x4AEF88u;
    SET_GPR_U32(ctx, 31, 0x4AEF90u);
    ctx->pc = 0x4AEF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEF88u;
    // 0x4aef8c: 0x8f84c240  lw          $a0, -0x3DC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x4AEF88u, 0x4AEF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEF90u;
label_4aef90:
    // 0x4aef90: 0x8f82c238  lw          $v0, -0x3DC8($gp)
    ctx->pc = 0x4aef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951480)));
label_4aef94:
    // 0x4aef94: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4AEF94u;
    {
        const bool branch_taken_0x4aef94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aef94) {
            ctx->pc = 0x4AEF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AEF94u;
            // 0x4aef98: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AEFE8u;
            goto label_4aefe8;
        }
    }
    ctx->pc = 0x4AEF9Cu;
    // 0x4aef9c: 0x8f84b8cc  lw          $a0, -0x4734($gp)
    ctx->pc = 0x4aef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949068)));
    // 0x4aefa0: 0x244182a  slt         $v1, $s2, $a0
    ctx->pc = 0x4aefa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4aefa4: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x4aefa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x4aefa8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4aefa8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4aefac: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x4aefacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x4aefb0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x4aefb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x4aefb4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4aefb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4aefb8: 0x911018  mult        $v0, $a0, $s1
    ctx->pc = 0x4aefb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4aefbc: 0xc12ba5e  jal         func_4AE978
    ctx->pc = 0x4AEFBCu;
    SET_GPR_U32(ctx, 31, 0x4AEFC4u);
    ctx->pc = 0x4AEFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEFBCu;
    // 0x4aefc0: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE978u, 0x4AEFBCu, 0x4AEFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEFC4u;
label_4aefc4:
    // 0x4aefc4: 0x8f83b8cc  lw          $v1, -0x4734($gp)
    ctx->pc = 0x4aefc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949068)));
    // 0x4aefc8: 0xaf82c238  sw          $v0, -0x3DC8($gp)
    ctx->pc = 0x4aefc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951480), GPR_U32(ctx, 2));
    // 0x4aefcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4aefccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4aefd0: 0xaf83b8cc  sw          $v1, -0x4734($gp)
    ctx->pc = 0x4aefd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949068), GPR_U32(ctx, 3));
    // 0x4aefd4: 0x8f84b8cc  lw          $a0, -0x4734($gp)
    ctx->pc = 0x4aefd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949068)));
    // 0x4aefd8: 0x8f83b8d0  lw          $v1, -0x4730($gp)
    ctx->pc = 0x4aefd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949072)));
    // 0x4aefdc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x4AEFDCu;
    {
        const bool branch_taken_0x4aefdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEFDCu;
        // 0x4aefe0: 0x8f82b8a4  lw          $v0, -0x475C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aefdc) {
            ctx->pc = 0x4AEF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aef80;
        }
    }
    ctx->pc = 0x4AEFE4u;
    // 0x4aefe4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4aefe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4aefe8:
    // 0x4aefe8: 0x2782c240  addiu       $v0, $gp, -0x3DC0
    ctx->pc = 0x4aefe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951488));
    // 0x4aefec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4aefecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aeff0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4aeff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aeff4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4aeff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aeff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aeff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aeffc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEFFCu;
        // 0x4af000: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF004u;
    // 0x4af004: 0x0  nop
    ctx->pc = 0x4af004u;
    // NOP
    ctx->pc = 0x4af008u;
}
