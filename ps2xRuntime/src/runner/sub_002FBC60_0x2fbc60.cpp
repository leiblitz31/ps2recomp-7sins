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

// Function: sub_002FBC60
// Address: 0x2fbc60 - 0x2fbd00
void sub_002FBC60_0x2fbc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBC60_0x2fbc60");
#endif

    switch (ctx->pc) {
        case 0x2fbc78u: goto label_2fbc78;
        default: break;
    }

    ctx->pc = 0x2fbc60u;

    // 0x2fbc60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fbc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fbc64: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x2fbc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x2fbc68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2fbc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fbc6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fbc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fbc70: 0xc0beca4  jal         func_2FB290
    ctx->pc = 0x2FBC70u;
    SET_GPR_U32(ctx, 31, 0x2FBC78u);
    ctx->pc = 0x2FBC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC70u;
    // 0x2fbc74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB290u, 0x2FBC70u, 0x2FBC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC78u;
label_2fbc78:
    // 0x2fbc78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fbc78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbc7c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2fbc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbc80: 0x38830002  xori        $v1, $a0, 0x2
    ctx->pc = 0x2fbc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x2fbc84: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FBC84u;
    {
        const bool branch_taken_0x2fbc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC84u;
        // 0x2fbc88: 0x2c850002  sltiu       $a1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc84) {
            ctx->pc = 0x2FBCF0u;
            goto label_2fbcf0;
        }
    }
    ctx->pc = 0x2FBC8Cu;
    // 0x2fbc8c: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FBC8Cu;
    {
        const bool branch_taken_0x2fbc8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC8Cu;
        // 0x2fbc90: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc8c) {
            ctx->pc = 0x2FBCF4u;
            goto label_2fbcf4;
        }
    }
    ctx->pc = 0x2FBC94u;
    // 0x2fbc94: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x2fbc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x2fbc98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FBC98u;
    {
        const bool branch_taken_0x2fbc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC98u;
        // 0x2fbc9c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc98) {
            ctx->pc = 0x2FBCBCu;
            goto label_2fbcbc;
        }
    }
    ctx->pc = 0x2FBCA0u;
    // 0x2fbca0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2fbca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fbca4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fbca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbca8: 0x4a00012  bltz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FBCA8u;
    {
        const bool branch_taken_0x2fbca8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2FBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCA8u;
        // 0x2fbcac: 0x28a3001f  slti        $v1, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbca8) {
            ctx->pc = 0x2FBCF4u;
            goto label_2fbcf4;
        }
    }
    ctx->pc = 0x2FBCB0u;
    // 0x2fbcb0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FBCB0u;
    {
        const bool branch_taken_0x2fbcb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCB0u;
        // 0x2fbcb4: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcb0) {
            ctx->pc = 0x2FBCD0u;
            goto label_2fbcd0;
        }
    }
    ctx->pc = 0x2FBCB8u;
    // 0x2fbcb8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2fbcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2fbcbc:
    // 0x2fbcbc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2fbcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2fbcc0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2fbcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2fbcc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fbcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fbcc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FBCC8u;
    {
        const bool branch_taken_0x2fbcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCC8u;
        // 0x2fbccc: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcc8) {
            ctx->pc = 0x2FBCF0u;
            goto label_2fbcf0;
        }
    }
    ctx->pc = 0x2FBCD0u;
label_2fbcd0:
    // 0x2fbcd0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2fbcd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbcd4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2fbcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fbcd8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2fbcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fbcdc: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x2fbcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x2fbce0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fbce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fbce4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fbce4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fbce8: 0x21823  negu        $v1, $v0
    ctx->pc = 0x2fbce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2fbcec: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2fbcecu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_2fbcf0:
    // 0x2fbcf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fbcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2fbcf4:
    // 0x2fbcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCF4u;
        // 0x2fbcf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBCFCu;
    // 0x2fbcfc: 0x0  nop
    ctx->pc = 0x2fbcfcu;
    // NOP
    ctx->pc = 0x2fbd00u;
}
