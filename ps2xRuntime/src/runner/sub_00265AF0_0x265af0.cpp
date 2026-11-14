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

// Function: sub_00265AF0
// Address: 0x265af0 - 0x265b90
void sub_00265AF0_0x265af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265AF0_0x265af0");
#endif

    switch (ctx->pc) {
        case 0x265b54u: goto label_265b54;
        case 0x265b74u: goto label_265b74;
        default: break;
    }

    ctx->pc = 0x265af0u;

    // 0x265af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265af8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x265af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x265afc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x265afcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x265b00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265b04: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x265B04u;
    {
        const bool branch_taken_0x265b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265b04) {
            ctx->pc = 0x265B74u;
            goto label_265b74;
        }
    }
    ctx->pc = 0x265B0Cu;
    // 0x265b0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265b10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x265b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x265b14: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x265B14u;
    {
        const bool branch_taken_0x265b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265b14) {
            ctx->pc = 0x265B54u;
            goto label_265b54;
        }
    }
    ctx->pc = 0x265B1Cu;
    // 0x265b1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x265b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265b20: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x265b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265b24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265b28: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x265b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x265b2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265b30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x265b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x265b34: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x265b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x265b38: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x265b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x265b3c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x265b3cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x265b40: 0x3012  mflo        $a2
    ctx->pc = 0x265b40u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x265b44: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x265b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x265b48: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x265b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x265b4c: 0xc09a160  jal         func_268580
    ctx->pc = 0x265B4Cu;
    SET_GPR_U32(ctx, 31, 0x265B54u);
    ctx->pc = 0x268580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268580u, 0x265B4Cu, 0x265B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265B54u;
label_265b54:
    // 0x265b54: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x265b54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265b58: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x265b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x265b5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x265b5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x265b60: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265B60u;
    {
        const bool branch_taken_0x265b60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x265b60) {
            ctx->pc = 0x265B74u;
            goto label_265b74;
        }
    }
    ctx->pc = 0x265B68u;
    // 0x265b68: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x265b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265b6c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x265B6Cu;
    SET_GPR_U32(ctx, 31, 0x265B74u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x265B6Cu, 0x265B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265B74u;
label_265b74:
    // 0x265b74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265b7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x265b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x265b80: 0x3e00008  jr          $ra
    ctx->pc = 0x265B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265B88u;
    // 0x265b88: 0x0  nop
    ctx->pc = 0x265b88u;
    // NOP
    // 0x265b8c: 0x0  nop
    ctx->pc = 0x265b8cu;
    // NOP
    ctx->pc = 0x265b90u;
}
