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

// Function: sub_00145200
// Address: 0x145200 - 0x1452a0
void sub_00145200_0x145200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145200_0x145200");
#endif

    switch (ctx->pc) {
        case 0x145264u: goto label_145264;
        case 0x145284u: goto label_145284;
        default: break;
    }

    ctx->pc = 0x145200u;

    // 0x145200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145208: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x145208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14520c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x14520cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x145210: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x145210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145214: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x145214u;
    {
        const bool branch_taken_0x145214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145214) {
            ctx->pc = 0x145284u;
            goto label_145284;
        }
    }
    ctx->pc = 0x14521Cu;
    // 0x14521c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145220: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x145220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145224: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x145224u;
    {
        const bool branch_taken_0x145224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145224) {
            ctx->pc = 0x145264u;
            goto label_145264;
        }
    }
    ctx->pc = 0x14522Cu;
    // 0x14522c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14522cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145230: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x145230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145234: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x145234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145238: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x145238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14523c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145240: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x145240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145244: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x145244u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x145248: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x145248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14524c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x14524cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x145250: 0x3012  mflo        $a2
    ctx->pc = 0x145250u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x145254: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x145254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x145258: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x145258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14525c: 0xc04372c  jal         func_10DCB0
    ctx->pc = 0x14525Cu;
    SET_GPR_U32(ctx, 31, 0x145264u);
    ctx->pc = 0x10DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCB0u, 0x14525Cu, 0x145264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145264u;
label_145264:
    // 0x145264: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x145264u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145268: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x145268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14526c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14526cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x145270: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145270u;
    {
        const bool branch_taken_0x145270 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x145270) {
            ctx->pc = 0x145284u;
            goto label_145284;
        }
    }
    ctx->pc = 0x145278u;
    // 0x145278: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x145278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14527c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x14527Cu;
    SET_GPR_U32(ctx, 31, 0x145284u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x14527Cu, 0x145284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145284u;
label_145284:
    // 0x145284: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x145284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14528c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14528cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x145290: 0x3e00008  jr          $ra
    ctx->pc = 0x145290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145298u;
    // 0x145298: 0x0  nop
    ctx->pc = 0x145298u;
    // NOP
    // 0x14529c: 0x0  nop
    ctx->pc = 0x14529cu;
    // NOP
    ctx->pc = 0x1452a0u;
}
