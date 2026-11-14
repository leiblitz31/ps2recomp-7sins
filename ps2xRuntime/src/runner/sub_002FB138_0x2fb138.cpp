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

// Function: sub_002FB138
// Address: 0x2fb138 - 0x2fb1b8
void sub_002FB138_0x2fb138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB138_0x2fb138");
#endif

    switch (ctx->pc) {
        case 0x2fb150u: goto label_2fb150;
        default: break;
    }

    ctx->pc = 0x2fb138u;

    // 0x2fb138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fb138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fb13c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2fb13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fb140: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fb140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fb144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fb148: 0xc0bec1a  jal         func_2FB068
    ctx->pc = 0x2FB148u;
    SET_GPR_U32(ctx, 31, 0x2FB150u);
    ctx->pc = 0x2FB14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB148u;
    // 0x2fb14c: 0xe7ac0010  swc1        $f12, 0x10($sp) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB068u, 0x2FB148u, 0x2FB150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB150u;
label_2fb150:
    // 0x2fb150: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2fb150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb154: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x2fb154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2fb158: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FB158u;
    {
        const bool branch_taken_0x2fb158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB158u;
        // 0x2fb15c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb158) {
            ctx->pc = 0x2FB1ACu;
            goto label_2fb1ac;
        }
    }
    ctx->pc = 0x2FB160u;
    // 0x2fb160: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2fb160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fb164: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FB164u;
    {
        const bool branch_taken_0x2fb164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB164u;
        // 0x2fb168: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb164) {
            ctx->pc = 0x2FB1B0u;
            goto label_2fb1b0;
        }
    }
    ctx->pc = 0x2FB16Cu;
    // 0x2fb16c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2fb16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fb170: 0x480000f  bltz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FB170u;
    {
        const bool branch_taken_0x2fb170 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2FB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB170u;
        // 0x2fb174: 0x28830020  slti        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb170) {
            ctx->pc = 0x2FB1B0u;
            goto label_2fb1b0;
        }
    }
    ctx->pc = 0x2FB178u;
    // 0x2fb178: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2FB178u;
    {
        const bool branch_taken_0x2fb178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB178u;
        // 0x2fb17c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb178) {
            ctx->pc = 0x2FB1B0u;
            goto label_2fb1b0;
        }
    }
    ctx->pc = 0x2FB180u;
    // 0x2fb180: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x2fb180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2fb184: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB184u;
    {
        const bool branch_taken_0x2fb184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb184) {
            ctx->pc = 0x2FB188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB184u;
            // 0x2fb188: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB1A0u;
            goto label_2fb1a0;
        }
    }
    ctx->pc = 0x2FB18Cu;
    // 0x2fb18c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2fb18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2fb190: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x2fb190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x2fb194: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB194u;
    {
        const bool branch_taken_0x2fb194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB194u;
        // 0x2fb198: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb194) {
            ctx->pc = 0x2FB1B0u;
            goto label_2fb1b0;
        }
    }
    ctx->pc = 0x2FB19Cu;
    // 0x2fb19c: 0x0  nop
    ctx->pc = 0x2fb19cu;
    // NOP
label_2fb1a0:
    // 0x2fb1a0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2fb1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2fb1a4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2fb1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fb1a8: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x2fb1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_2fb1ac:
    // 0x2fb1ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fb1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fb1b0:
    // 0x2fb1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1B0u;
        // 0x2fb1b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB1B8u;
}
