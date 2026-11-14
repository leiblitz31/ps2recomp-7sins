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

// Function: sub_00279920
// Address: 0x279920 - 0x279aa0
void sub_00279920_0x279920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279920_0x279920");
#endif

    switch (ctx->pc) {
        case 0x279920u: goto label_279920;
        case 0x279924u: goto label_279924;
        case 0x279928u: goto label_279928;
        case 0x27992cu: goto label_27992c;
        case 0x279930u: goto label_279930;
        case 0x279934u: goto label_279934;
        case 0x279938u: goto label_279938;
        case 0x27993cu: goto label_27993c;
        case 0x279940u: goto label_279940;
        case 0x279944u: goto label_279944;
        case 0x279948u: goto label_279948;
        case 0x27994cu: goto label_27994c;
        case 0x279950u: goto label_279950;
        case 0x279954u: goto label_279954;
        case 0x279958u: goto label_279958;
        case 0x27995cu: goto label_27995c;
        case 0x279960u: goto label_279960;
        case 0x279964u: goto label_279964;
        case 0x279968u: goto label_279968;
        case 0x27996cu: goto label_27996c;
        case 0x279970u: goto label_279970;
        case 0x279974u: goto label_279974;
        case 0x279978u: goto label_279978;
        case 0x27997cu: goto label_27997c;
        case 0x279980u: goto label_279980;
        case 0x279984u: goto label_279984;
        case 0x279988u: goto label_279988;
        case 0x27998cu: goto label_27998c;
        case 0x279990u: goto label_279990;
        case 0x279994u: goto label_279994;
        case 0x279998u: goto label_279998;
        case 0x27999cu: goto label_27999c;
        case 0x2799a0u: goto label_2799a0;
        case 0x2799a4u: goto label_2799a4;
        case 0x2799a8u: goto label_2799a8;
        case 0x2799acu: goto label_2799ac;
        case 0x2799b0u: goto label_2799b0;
        case 0x2799b4u: goto label_2799b4;
        case 0x2799b8u: goto label_2799b8;
        case 0x2799bcu: goto label_2799bc;
        case 0x2799c0u: goto label_2799c0;
        case 0x2799c4u: goto label_2799c4;
        case 0x2799c8u: goto label_2799c8;
        case 0x2799ccu: goto label_2799cc;
        case 0x2799d0u: goto label_2799d0;
        case 0x2799d4u: goto label_2799d4;
        case 0x2799d8u: goto label_2799d8;
        case 0x2799dcu: goto label_2799dc;
        case 0x2799e0u: goto label_2799e0;
        case 0x2799e4u: goto label_2799e4;
        case 0x2799e8u: goto label_2799e8;
        case 0x2799ecu: goto label_2799ec;
        case 0x2799f0u: goto label_2799f0;
        case 0x2799f4u: goto label_2799f4;
        case 0x2799f8u: goto label_2799f8;
        case 0x2799fcu: goto label_2799fc;
        case 0x279a00u: goto label_279a00;
        case 0x279a04u: goto label_279a04;
        case 0x279a08u: goto label_279a08;
        case 0x279a0cu: goto label_279a0c;
        case 0x279a10u: goto label_279a10;
        case 0x279a14u: goto label_279a14;
        case 0x279a18u: goto label_279a18;
        case 0x279a1cu: goto label_279a1c;
        case 0x279a20u: goto label_279a20;
        case 0x279a24u: goto label_279a24;
        case 0x279a28u: goto label_279a28;
        case 0x279a2cu: goto label_279a2c;
        case 0x279a30u: goto label_279a30;
        case 0x279a34u: goto label_279a34;
        case 0x279a38u: goto label_279a38;
        case 0x279a3cu: goto label_279a3c;
        case 0x279a40u: goto label_279a40;
        case 0x279a44u: goto label_279a44;
        case 0x279a48u: goto label_279a48;
        case 0x279a4cu: goto label_279a4c;
        case 0x279a50u: goto label_279a50;
        case 0x279a54u: goto label_279a54;
        case 0x279a58u: goto label_279a58;
        case 0x279a5cu: goto label_279a5c;
        case 0x279a60u: goto label_279a60;
        case 0x279a64u: goto label_279a64;
        case 0x279a68u: goto label_279a68;
        case 0x279a6cu: goto label_279a6c;
        case 0x279a70u: goto label_279a70;
        case 0x279a74u: goto label_279a74;
        case 0x279a78u: goto label_279a78;
        case 0x279a7cu: goto label_279a7c;
        case 0x279a80u: goto label_279a80;
        case 0x279a84u: goto label_279a84;
        case 0x279a88u: goto label_279a88;
        case 0x279a8cu: goto label_279a8c;
        case 0x279a90u: goto label_279a90;
        case 0x279a94u: goto label_279a94;
        case 0x279a98u: goto label_279a98;
        case 0x279a9cu: goto label_279a9c;
        default: break;
    }

    ctx->pc = 0x279920u;

label_279920:
    // 0x279920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_279924:
    // 0x279924: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x279924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_279928:
    // 0x279928: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x279928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27992c:
    // 0x27992c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27992cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_279930:
    // 0x279930: 0x3e00008  jr          $ra
label_279934:
    if (ctx->pc == 0x279934u) {
        ctx->pc = 0x279938u;
        goto label_279938;
    }
    ctx->pc = 0x279930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279938u;
label_279938:
    // 0x279938: 0x0  nop
    ctx->pc = 0x279938u;
    // NOP
label_27993c:
    // 0x27993c: 0x0  nop
    ctx->pc = 0x27993cu;
    // NOP
label_279940:
    // 0x279940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_279944:
    // 0x279944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_279948:
    // 0x279948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27994c:
    // 0x27994c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27994cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_279950:
    // 0x279950: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x279950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_279954:
    // 0x279954: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x279954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_279958:
    // 0x279958: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x279958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27995c:
    // 0x27995c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x27995cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_279960:
    // 0x279960: 0x320f809  jalr        $t9
label_279964:
    if (ctx->pc == 0x279964u) {
        ctx->pc = 0x279968u;
        goto label_279968;
    }
    ctx->pc = 0x279960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x279968u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279960u, 0x279968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279968u;
label_279968:
    // 0x279968: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x279968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_27996c:
    // 0x27996c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x27996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_279970:
    // 0x279970: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_279974:
    if (ctx->pc == 0x279974u) {
        ctx->pc = 0x279978u;
        goto label_279978;
    }
    ctx->pc = 0x279970u;
    {
        const bool branch_taken_0x279970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279970) {
            ctx->pc = 0x2799A0u;
            goto label_2799a0;
        }
    }
    ctx->pc = 0x279978u;
label_279978:
    // 0x279978: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x279978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_27997c:
    // 0x27997c: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x27997cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_279980:
    // 0x279980: 0xc09e6e4  jal         func_279B90
label_279984:
    if (ctx->pc == 0x279984u) {
        ctx->pc = 0x279988u;
        goto label_279988;
    }
    ctx->pc = 0x279980u;
    SET_GPR_U32(ctx, 31, 0x279988u);
    ctx->pc = 0x279B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B90u, 0x279980u, 0x279988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279988u;
label_279988:
    // 0x279988: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x279988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_27998c:
    // 0x27998c: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x27998cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_279990:
    // 0x279990: 0xc119c5c  jal         func_467170
label_279994:
    if (ctx->pc == 0x279994u) {
        ctx->pc = 0x279998u;
        goto label_279998;
    }
    ctx->pc = 0x279990u;
    SET_GPR_U32(ctx, 31, 0x279998u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x279990u, 0x279998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279998u;
label_279998:
    // 0x279998: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x279998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_27999c:
    // 0x27999c: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x27999cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
label_2799a0:
    // 0x2799a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2799a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2799a4:
    // 0x2799a4: 0xc085204  jal         func_214810
label_2799a8:
    if (ctx->pc == 0x2799A8u) {
        ctx->pc = 0x2799ACu;
        goto label_2799ac;
    }
    ctx->pc = 0x2799A4u;
    SET_GPR_U32(ctx, 31, 0x2799ACu);
    ctx->pc = 0x214810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214810u, 0x2799A4u, 0x2799ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2799ACu;
label_2799ac:
    // 0x2799ac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2799acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2799b0:
    // 0x2799b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2799b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2799b4:
    // 0x2799b4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x2799b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2799b8:
    // 0x2799b8: 0x10020023  beq         $zero, $v0, . + 4 + (0x23 << 2)
label_2799bc:
    if (ctx->pc == 0x2799BCu) {
        ctx->pc = 0x2799C0u;
        goto label_2799c0;
    }
    ctx->pc = 0x2799B8u;
    {
        const bool branch_taken_0x2799b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2799b8) {
            ctx->pc = 0x279A48u;
            goto label_279a48;
        }
    }
    ctx->pc = 0x2799C0u;
label_2799c0:
    // 0x2799c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2799c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2799c4:
    // 0x2799c4: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x2799c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_2799c8:
    // 0x2799c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2799cc:
    if (ctx->pc == 0x2799CCu) {
        ctx->pc = 0x2799D0u;
        goto label_2799d0;
    }
    ctx->pc = 0x2799C8u;
    {
        const bool branch_taken_0x2799c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2799c8) {
            ctx->pc = 0x2799F8u;
            goto label_2799f8;
        }
    }
    ctx->pc = 0x2799D0u;
label_2799d0:
    // 0x2799d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2799d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2799d4:
    // 0x2799d4: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x2799d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_2799d8:
    // 0x2799d8: 0xc09e6c0  jal         func_279B00
label_2799dc:
    if (ctx->pc == 0x2799DCu) {
        ctx->pc = 0x2799E0u;
        goto label_2799e0;
    }
    ctx->pc = 0x2799D8u;
    SET_GPR_U32(ctx, 31, 0x2799E0u);
    ctx->pc = 0x279B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B00u, 0x2799D8u, 0x2799E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2799E0u;
label_2799e0:
    // 0x2799e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2799e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2799e4:
    // 0x2799e4: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x2799e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_2799e8:
    // 0x2799e8: 0xc119c5c  jal         func_467170
label_2799ec:
    if (ctx->pc == 0x2799ECu) {
        ctx->pc = 0x2799F0u;
        goto label_2799f0;
    }
    ctx->pc = 0x2799E8u;
    SET_GPR_U32(ctx, 31, 0x2799F0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2799E8u, 0x2799F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2799F0u;
label_2799f0:
    // 0x2799f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2799f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2799f4:
    // 0x2799f4: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x2799f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
label_2799f8:
    // 0x2799f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2799f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2799fc:
    // 0x2799fc: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x2799fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_279a00:
    // 0x279a00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x279a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_279a04:
    // 0x279a04: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x279a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_279a08:
    // 0x279a08: 0x320f809  jalr        $t9
label_279a0c:
    if (ctx->pc == 0x279A0Cu) {
        ctx->pc = 0x279A10u;
        goto label_279a10;
    }
    ctx->pc = 0x279A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x279A10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279A08u, 0x279A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279A10u;
label_279a10:
    // 0x279a10: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x279a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_279a14:
    // 0x279a14: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x279a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_279a18:
    // 0x279a18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_279a1c:
    if (ctx->pc == 0x279A1Cu) {
        ctx->pc = 0x279A20u;
        goto label_279a20;
    }
    ctx->pc = 0x279A18u;
    {
        const bool branch_taken_0x279a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279a18) {
            ctx->pc = 0x279A48u;
            goto label_279a48;
        }
    }
    ctx->pc = 0x279A20u;
label_279a20:
    // 0x279a20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x279a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_279a24:
    // 0x279a24: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x279a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_279a28:
    // 0x279a28: 0xc09e6b4  jal         func_279AD0
label_279a2c:
    if (ctx->pc == 0x279A2Cu) {
        ctx->pc = 0x279A30u;
        goto label_279a30;
    }
    ctx->pc = 0x279A28u;
    SET_GPR_U32(ctx, 31, 0x279A30u);
    ctx->pc = 0x279AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279AD0u, 0x279A28u, 0x279A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A30u;
label_279a30:
    // 0x279a30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x279a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_279a34:
    // 0x279a34: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x279a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_279a38:
    // 0x279a38: 0xc119c5c  jal         func_467170
label_279a3c:
    if (ctx->pc == 0x279A3Cu) {
        ctx->pc = 0x279A40u;
        goto label_279a40;
    }
    ctx->pc = 0x279A38u;
    SET_GPR_U32(ctx, 31, 0x279A40u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x279A38u, 0x279A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A40u;
label_279a40:
    // 0x279a40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x279a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_279a44:
    // 0x279a44: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x279a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
label_279a48:
    // 0x279a48: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x279a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_279a4c:
    // 0x279a4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x279a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_279a50:
    // 0x279a50: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x279a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_279a54:
    // 0x279a54: 0x320f809  jalr        $t9
label_279a58:
    if (ctx->pc == 0x279A58u) {
        ctx->pc = 0x279A5Cu;
        goto label_279a5c;
    }
    ctx->pc = 0x279A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x279A5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279A54u, 0x279A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279A5Cu;
label_279a5c:
    // 0x279a5c: 0x8f82bb84  lw          $v0, -0x447C($gp)
    ctx->pc = 0x279a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_279a60:
    // 0x279a60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_279a64:
    if (ctx->pc == 0x279A64u) {
        ctx->pc = 0x279A68u;
        goto label_279a68;
    }
    ctx->pc = 0x279A60u;
    {
        const bool branch_taken_0x279a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279a60) {
            ctx->pc = 0x279A84u;
            goto label_279a84;
        }
    }
    ctx->pc = 0x279A68u;
label_279a68:
    // 0x279a68: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x279a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_279a6c:
    // 0x279a6c: 0xc09e6a8  jal         func_279AA0
label_279a70:
    if (ctx->pc == 0x279A70u) {
        ctx->pc = 0x279A74u;
        goto label_279a74;
    }
    ctx->pc = 0x279A6Cu;
    SET_GPR_U32(ctx, 31, 0x279A74u);
    ctx->pc = 0x279AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279AA0u, 0x279A6Cu, 0x279A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A74u;
label_279a74:
    // 0x279a74: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x279a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_279a78:
    // 0x279a78: 0xc119c5c  jal         func_467170
label_279a7c:
    if (ctx->pc == 0x279A7Cu) {
        ctx->pc = 0x279A80u;
        goto label_279a80;
    }
    ctx->pc = 0x279A78u;
    SET_GPR_U32(ctx, 31, 0x279A80u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x279A78u, 0x279A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A80u;
label_279a80:
    // 0x279a80: 0xaf80bb84  sw          $zero, -0x447C($gp)
    ctx->pc = 0x279a80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949764), GPR_U32(ctx, 0));
label_279a84:
    // 0x279a84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x279a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279a88:
    // 0x279a88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_279a8c:
    // 0x279a8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_279a90:
    // 0x279a90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x279a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_279a94:
    // 0x279a94: 0x3e00008  jr          $ra
label_279a98:
    if (ctx->pc == 0x279A98u) {
        ctx->pc = 0x279A9Cu;
        goto label_279a9c;
    }
    ctx->pc = 0x279A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279A9Cu;
label_279a9c:
    // 0x279a9c: 0x0  nop
    ctx->pc = 0x279a9cu;
    // NOP
    ctx->pc = 0x279aa0u;
}
