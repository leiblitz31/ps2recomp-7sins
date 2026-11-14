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

// Function: sub_0027A930
// Address: 0x27a930 - 0x27a9c0
void sub_0027A930_0x27a930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A930_0x27a930");
#endif

    switch (ctx->pc) {
        case 0x27a96cu: goto label_27a96c;
        case 0x27a9acu: goto label_27a9ac;
        default: break;
    }

    ctx->pc = 0x27a930u;

    // 0x27a930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27a930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27a934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27a934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27a938: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27a938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x27a93c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x27a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x27a940: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a944: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x27a944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27a948: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27a948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a94c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x27a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27a950: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27A950u;
    {
        const bool branch_taken_0x27a950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a950) {
            ctx->pc = 0x27A984u;
            goto label_27a984;
        }
    }
    ctx->pc = 0x27A958u;
    // 0x27a958: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a95c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27a95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27a960: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x27a960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a964: 0xc09eb14  jal         func_27AC50
    ctx->pc = 0x27A964u;
    SET_GPR_U32(ctx, 31, 0x27A96Cu);
    ctx->pc = 0x27AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC50u, 0x27A964u, 0x27A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A96Cu;
label_27a96c:
    // 0x27a96c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a970: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x27a970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27a974: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x27a974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x27a978: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x27a978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x27a97c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27A97Cu;
    {
        const bool branch_taken_0x27a97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a97c) {
            ctx->pc = 0x27A9ACu;
            goto label_27a9ac;
        }
    }
    ctx->pc = 0x27A984u;
label_27a984:
    // 0x27a984: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27a984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a988: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x27a988u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x27a98c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27a98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a990: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x27a990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27a994: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x27a994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a998: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x27a998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x27a99c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x27a99cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a9a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x27a9a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a9a4: 0xc09ea70  jal         func_27A9C0
    ctx->pc = 0x27A9A4u;
    SET_GPR_U32(ctx, 31, 0x27A9ACu);
    ctx->pc = 0x27A9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A9C0u, 0x27A9A4u, 0x27A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9ACu;
label_27a9ac:
    // 0x27a9ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27a9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a9b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27a9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27a9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x27A9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A9BCu;
    // 0x27a9bc: 0x0  nop
    ctx->pc = 0x27a9bcu;
    // NOP
    ctx->pc = 0x27a9c0u;
}
