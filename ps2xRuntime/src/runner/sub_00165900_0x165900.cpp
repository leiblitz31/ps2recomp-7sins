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

// Function: sub_00165900
// Address: 0x165900 - 0x1659a0
void sub_00165900_0x165900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165900_0x165900");
#endif

    switch (ctx->pc) {
        case 0x165948u: goto label_165948;
        default: break;
    }

    ctx->pc = 0x165900u;

    // 0x165900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x165900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x165904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16590c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16590cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x165910: 0xa7a50030  sh          $a1, 0x30($sp)
    ctx->pc = 0x165910u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x165914: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x165914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165918: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x165918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16591c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16591Cu;
    {
        const bool branch_taken_0x16591c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16591c) {
            ctx->pc = 0x165930u;
            goto label_165930;
        }
    }
    ctx->pc = 0x165924u;
    // 0x165924: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x165924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165928: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x165928u;
    {
        const bool branch_taken_0x165928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165928) {
            ctx->pc = 0x165984u;
            goto label_165984;
        }
    }
    ctx->pc = 0x165930u;
label_165930:
    // 0x165930: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x165930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165934: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x165934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165938: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x165938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16593c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16593cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165940: 0xc11926c  jal         func_4649B0
    ctx->pc = 0x165940u;
    SET_GPR_U32(ctx, 31, 0x165948u);
    ctx->pc = 0x4649B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4649B0u, 0x165940u, 0x165948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165948u;
label_165948:
    // 0x165948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16594c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16594Cu;
    {
        const bool branch_taken_0x16594c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16594c) {
            ctx->pc = 0x165960u;
            goto label_165960;
        }
    }
    ctx->pc = 0x165954u;
    // 0x165954: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x165954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165958: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x165958u;
    {
        const bool branch_taken_0x165958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165958) {
            ctx->pc = 0x165984u;
            goto label_165984;
        }
    }
    ctx->pc = 0x165960u;
label_165960:
    // 0x165960: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x165960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165964: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x165964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165968: 0x2021823  subu        $v1, $s0, $v0
    ctx->pc = 0x165968u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16596c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165970: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x165970u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x165974: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165974u;
    {
        const bool branch_taken_0x165974 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x165974) {
            ctx->pc = 0x165984u;
            goto label_165984;
        }
    }
    ctx->pc = 0x16597Cu;
    // 0x16597c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x16597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165980: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x165980u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_165984:
    // 0x165984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16598c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x16598cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x165990: 0x3e00008  jr          $ra
    ctx->pc = 0x165990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165998u;
    // 0x165998: 0x0  nop
    ctx->pc = 0x165998u;
    // NOP
    // 0x16599c: 0x0  nop
    ctx->pc = 0x16599cu;
    // NOP
    ctx->pc = 0x1659a0u;
}
