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

// Function: sub_004B41F0
// Address: 0x4b41f0 - 0x4b4248
void sub_004B41F0_0x4b41f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B41F0_0x4b41f0");
#endif

    switch (ctx->pc) {
        case 0x4b41f0u: goto label_4b41f0;
        case 0x4b41f4u: goto label_4b41f4;
        case 0x4b41f8u: goto label_4b41f8;
        case 0x4b41fcu: goto label_4b41fc;
        case 0x4b4200u: goto label_4b4200;
        case 0x4b4204u: goto label_4b4204;
        case 0x4b4208u: goto label_4b4208;
        case 0x4b420cu: goto label_4b420c;
        case 0x4b4210u: goto label_4b4210;
        case 0x4b4214u: goto label_4b4214;
        case 0x4b4218u: goto label_4b4218;
        case 0x4b421cu: goto label_4b421c;
        case 0x4b4220u: goto label_4b4220;
        case 0x4b4224u: goto label_4b4224;
        case 0x4b4228u: goto label_4b4228;
        case 0x4b422cu: goto label_4b422c;
        case 0x4b4230u: goto label_4b4230;
        case 0x4b4234u: goto label_4b4234;
        case 0x4b4238u: goto label_4b4238;
        case 0x4b423cu: goto label_4b423c;
        case 0x4b4240u: goto label_4b4240;
        case 0x4b4244u: goto label_4b4244;
        default: break;
    }

    ctx->pc = 0x4b41f0u;

label_4b41f0:
    // 0x4b41f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b41f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b41f4:
    // 0x4b41f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b41f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b41f8:
    // 0x4b41f8: 0xc0c1f08  jal         func_307C20
label_4b41fc:
    if (ctx->pc == 0x4B41FCu) {
        ctx->pc = 0x4B41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B41F8u;
        // 0x4b41fc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B4200u;
        goto label_4b4200;
    }
    ctx->pc = 0x4B41F8u;
    SET_GPR_U32(ctx, 31, 0x4B4200u);
    ctx->pc = 0x4B41FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B41F8u;
    // 0x4b41fc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x4B41F8u, 0x4B4200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4200u;
label_4b4200:
    // 0x4b4200: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x4b4200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_4b4204:
    // 0x4b4204: 0x8c627c84  lw          $v0, 0x7C84($v1)
    ctx->pc = 0x4b4204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31876)));
label_4b4208:
    // 0x4b4208: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4b420c:
    if (ctx->pc == 0x4B420Cu) {
        ctx->pc = 0x4B420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4208u;
        // 0x4b420c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B4210u;
        goto label_4b4210;
    }
    ctx->pc = 0x4B4208u;
    {
        const bool branch_taken_0x4b4208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4208u;
        // 0x4b420c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4208) {
            ctx->pc = 0x4B4228u;
            goto label_4b4228;
        }
    }
    ctx->pc = 0x4B4210u;
label_4b4210:
    // 0x4b4210: 0x40f809  jalr        $v0
label_4b4214:
    if (ctx->pc == 0x4B4214u) {
        ctx->pc = 0x4B4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4210u;
        // 0x4b4214: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B4218u;
        goto label_4b4218;
    }
    ctx->pc = 0x4B4210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B4218u);
        ctx->pc = 0x4B4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4210u;
        // 0x4b4214: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4210u, 0x4B4218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B4218u;
label_4b4218:
    // 0x4b4218: 0xc0c1f1c  jal         func_307C70
label_4b421c:
    if (ctx->pc == 0x4B421Cu) {
        ctx->pc = 0x4B4220u;
        goto label_4b4220;
    }
    ctx->pc = 0x4B4218u;
    SET_GPR_U32(ctx, 31, 0x4B4220u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4B4218u, 0x4B4220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4220u;
label_4b4220:
    // 0x4b4220: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b4224:
    if (ctx->pc == 0x4B4224u) {
        ctx->pc = 0x4B4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4220u;
        // 0x4b4224: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B4228u;
        goto label_4b4228;
    }
    ctx->pc = 0x4B4220u;
    {
        const bool branch_taken_0x4b4220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4220u;
        // 0x4b4224: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4220) {
            ctx->pc = 0x4B4240u;
            goto label_4b4240;
        }
    }
    ctx->pc = 0x4B4228u;
label_4b4228:
    // 0x4b4228: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4b4228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4b422c:
    // 0x4b422c: 0xc12d3aa  jal         func_4B4EA8
label_4b4230:
    if (ctx->pc == 0x4B4230u) {
        ctx->pc = 0x4B4230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B422Cu;
        // 0x4b4230: 0x2484ee50  addiu       $a0, $a0, -0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B4234u;
        goto label_4b4234;
    }
    ctx->pc = 0x4B422Cu;
    SET_GPR_U32(ctx, 31, 0x4B4234u);
    ctx->pc = 0x4B4230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B422Cu;
    // 0x4b4230: 0x2484ee50  addiu       $a0, $a0, -0x11B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4EA8u, 0x4B422Cu, 0x4B4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4234u;
label_4b4234:
    // 0x4b4234: 0xc0c1f1c  jal         func_307C70
label_4b4238:
    if (ctx->pc == 0x4B4238u) {
        ctx->pc = 0x4B423Cu;
        goto label_4b423c;
    }
    ctx->pc = 0x4B4234u;
    SET_GPR_U32(ctx, 31, 0x4B423Cu);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4B4234u, 0x4B423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B423Cu;
label_4b423c:
    // 0x4b423c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b423cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b4240:
    // 0x4b4240: 0x3e00008  jr          $ra
label_4b4244:
    if (ctx->pc == 0x4B4244u) {
        ctx->pc = 0x4B4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4240u;
        // 0x4b4244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B4248u;
        goto label_fallthrough_0x4b4240;
    }
    ctx->pc = 0x4B4240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4240u;
        // 0x4b4244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b4240:
    ctx->pc = 0x4B4248u;
}
