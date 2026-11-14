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

// Function: sub_004AC230
// Address: 0x4ac230 - 0x4ac2a0
void sub_004AC230_0x4ac230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC230_0x4ac230");
#endif

    switch (ctx->pc) {
        case 0x4ac24cu: goto label_4ac24c;
        case 0x4ac264u: goto label_4ac264;
        case 0x4ac284u: goto label_4ac284;
        default: break;
    }

    ctx->pc = 0x4ac230u;

    // 0x4ac230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ac230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ac234: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ac234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4ac238: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ac238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ac23c: 0x24508a10  addiu       $s0, $v0, -0x75F0
    ctx->pc = 0x4ac23cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937104));
    // 0x4ac240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac244: 0xc1275de  jal         func_49D778
    ctx->pc = 0x4AC244u;
    SET_GPR_U32(ctx, 31, 0x4AC24Cu);
    ctx->pc = 0x4AC248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC244u;
    // 0x4ac248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D778u, 0x4AC244u, 0x4AC24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC24Cu;
label_4ac24c:
    // 0x4ac24c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4AC24Cu;
    {
        const bool branch_taken_0x4ac24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC24Cu;
        // 0x4ac250: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac24c) {
            ctx->pc = 0x4AC28Cu;
            goto label_4ac28c;
        }
    }
    ctx->pc = 0x4AC254u;
    // 0x4ac254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ac254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac258: 0x24a52b10  addiu       $a1, $a1, 0x2B10
    ctx->pc = 0x4ac258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11024));
    // 0x4ac25c: 0xc1275ba  jal         func_49D6E8
    ctx->pc = 0x4AC25Cu;
    SET_GPR_U32(ctx, 31, 0x4AC264u);
    ctx->pc = 0x4AC260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC25Cu;
    // 0x4ac260: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D6E8u, 0x4AC25Cu, 0x4AC264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC264u;
label_4ac264:
    // 0x4ac264: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4ac264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4ac268: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4ac268u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x4ac26c: 0x24a56ed0  addiu       $a1, $a1, 0x6ED0
    ctx->pc = 0x4ac26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28368));
    // 0x4ac270: 0x24e76f48  addiu       $a3, $a3, 0x6F48
    ctx->pc = 0x4ac270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28488));
    // 0x4ac274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ac274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac278: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4ac278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4ac27c: 0xc12776a  jal         func_49DDA8
    ctx->pc = 0x4AC27Cu;
    SET_GPR_U32(ctx, 31, 0x4AC284u);
    ctx->pc = 0x4AC280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC27Cu;
    // 0x4ac280: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DDA8u, 0x4AC27Cu, 0x4AC284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC284u;
label_4ac284:
    // 0x4ac284: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AC284u;
    {
        const bool branch_taken_0x4ac284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC284u;
        // 0x4ac288: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac284) {
            ctx->pc = 0x4AC290u;
            goto label_4ac290;
        }
    }
    ctx->pc = 0x4AC28Cu;
label_4ac28c:
    // 0x4ac28c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ac28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac290:
    // 0x4ac290: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ac290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac298: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC298u;
        // 0x4ac29c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC2A0u;
}
