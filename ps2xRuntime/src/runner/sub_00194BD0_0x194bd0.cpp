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

// Function: sub_00194BD0
// Address: 0x194bd0 - 0x194c70
void sub_00194BD0_0x194bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194BD0_0x194bd0");
#endif

    switch (ctx->pc) {
        case 0x194c34u: goto label_194c34;
        case 0x194c54u: goto label_194c54;
        default: break;
    }

    ctx->pc = 0x194bd0u;

    // 0x194bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194bd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x194bdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x194bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x194be0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194be4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x194BE4u;
    {
        const bool branch_taken_0x194be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194be4) {
            ctx->pc = 0x194C54u;
            goto label_194c54;
        }
    }
    ctx->pc = 0x194BECu;
    // 0x194bec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194bf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x194bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194bf4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x194BF4u;
    {
        const bool branch_taken_0x194bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194bf4) {
            ctx->pc = 0x194C34u;
            goto label_194c34;
        }
    }
    ctx->pc = 0x194BFCu;
    // 0x194bfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194c00: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x194c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194c04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194c08: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x194c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x194c0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194c10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x194c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194c14: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x194c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194c18: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x194c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x194c1c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x194c1cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x194c20: 0x3012  mflo        $a2
    ctx->pc = 0x194c20u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x194c24: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x194c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194c28: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x194c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x194c2c: 0xc067318  jal         func_19CC60
    ctx->pc = 0x194C2Cu;
    SET_GPR_U32(ctx, 31, 0x194C34u);
    ctx->pc = 0x19CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CC60u, 0x194C2Cu, 0x194C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C34u;
label_194c34:
    // 0x194c34: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x194c34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194c38: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x194c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194c3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x194c3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x194c40: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194C40u;
    {
        const bool branch_taken_0x194c40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x194c40) {
            ctx->pc = 0x194C54u;
            goto label_194c54;
        }
    }
    ctx->pc = 0x194C48u;
    // 0x194c48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194c4c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x194C4Cu;
    SET_GPR_U32(ctx, 31, 0x194C54u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x194C4Cu, 0x194C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C54u;
label_194c54:
    // 0x194c54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194c5c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x194c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x194c60: 0x3e00008  jr          $ra
    ctx->pc = 0x194C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194C68u;
    // 0x194c68: 0x0  nop
    ctx->pc = 0x194c68u;
    // NOP
    // 0x194c6c: 0x0  nop
    ctx->pc = 0x194c6cu;
    // NOP
    ctx->pc = 0x194c70u;
}
