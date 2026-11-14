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

// Function: sub_0041C2F0
// Address: 0x41c2f0 - 0x41c340
void sub_0041C2F0_0x41c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C2F0_0x41c2f0");
#endif

    switch (ctx->pc) {
        case 0x41c2f0u: goto label_41c2f0;
        case 0x41c2f4u: goto label_41c2f4;
        case 0x41c2f8u: goto label_41c2f8;
        case 0x41c2fcu: goto label_41c2fc;
        case 0x41c300u: goto label_41c300;
        case 0x41c304u: goto label_41c304;
        case 0x41c308u: goto label_41c308;
        case 0x41c30cu: goto label_41c30c;
        case 0x41c310u: goto label_41c310;
        case 0x41c314u: goto label_41c314;
        case 0x41c318u: goto label_41c318;
        case 0x41c31cu: goto label_41c31c;
        case 0x41c320u: goto label_41c320;
        case 0x41c324u: goto label_41c324;
        case 0x41c328u: goto label_41c328;
        case 0x41c32cu: goto label_41c32c;
        case 0x41c330u: goto label_41c330;
        case 0x41c334u: goto label_41c334;
        case 0x41c338u: goto label_41c338;
        case 0x41c33cu: goto label_41c33c;
        default: break;
    }

    ctx->pc = 0x41c2f0u;

label_41c2f0:
    // 0x41c2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41c2f4:
    // 0x41c2f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41c2f8:
    // 0x41c2f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41c2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41c2fc:
    // 0x41c2fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41c2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41c300:
    // 0x41c300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41c300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41c304:
    // 0x41c304: 0x8c45e98c  lw          $a1, -0x1674($v0)
    ctx->pc = 0x41c304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_41c308:
    // 0x41c308: 0xa0f809  jalr        $a1
label_41c30c:
    if (ctx->pc == 0x41C30Cu) {
        ctx->pc = 0x41C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C308u;
        // 0x41c30c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C310u;
        goto label_41c310;
    }
    ctx->pc = 0x41C308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x41C310u);
        ctx->pc = 0x41C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C308u;
        // 0x41c30c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C308u, 0x41C310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C310u;
label_41c310:
    // 0x41c310: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x41c310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41c314:
    // 0x41c314: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x41c314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_41c318:
    // 0x41c318: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41c318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c31c:
    // 0x41c31c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x41c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_41c320:
    // 0x41c320: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x41c320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_41c324:
    // 0x41c324: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x41c324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_41c328:
    // 0x41c328: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41c328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41c32c:
    // 0x41c32c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41c32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41c330:
    // 0x41c330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41c330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41c334:
    // 0x41c334: 0x3e00008  jr          $ra
label_41c338:
    if (ctx->pc == 0x41C338u) {
        ctx->pc = 0x41C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C334u;
        // 0x41c338: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C33Cu;
        goto label_41c33c;
    }
    ctx->pc = 0x41C334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C334u;
        // 0x41c338: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C33Cu;
label_41c33c:
    // 0x41c33c: 0x0  nop
    ctx->pc = 0x41c33cu;
    // NOP
    ctx->pc = 0x41c340u;
}
