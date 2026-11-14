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

// Function: sub_001EF5D0
// Address: 0x1ef5d0 - 0x1ef660
void sub_001EF5D0_0x1ef5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF5D0_0x1ef5d0");
#endif

    switch (ctx->pc) {
        case 0x1ef608u: goto label_1ef608;
        case 0x1ef620u: goto label_1ef620;
        default: break;
    }

    ctx->pc = 0x1ef5d0u;

    // 0x1ef5d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ef5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ef5d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ef5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ef5d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef5dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1ef5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1ef5e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ef5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef5e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF5E4u;
    {
        const bool branch_taken_0x1ef5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef5e4) {
            ctx->pc = 0x1EF5F8u;
            goto label_1ef5f8;
        }
    }
    ctx->pc = 0x1EF5ECu;
    // 0x1ef5ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef5f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1EF5F0u;
    {
        const bool branch_taken_0x1ef5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef5f0) {
            ctx->pc = 0x1EF640u;
            goto label_1ef640;
        }
    }
    ctx->pc = 0x1EF5F8u;
label_1ef5f8:
    // 0x1ef5f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ef5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef5fc: 0xc44c0034  lwc1        $f12, 0x34($v0)
    ctx->pc = 0x1ef5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ef600: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x1EF600u;
    SET_GPR_U32(ctx, 31, 0x1EF608u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x1EF600u, 0x1EF608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF608u;
label_1ef608:
    // 0x1ef608: 0x3c03bff0  lui         $v1, 0xBFF0
    ctx->pc = 0x1ef608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49136 << 16));
    // 0x1ef60c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ef60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ef610: 0x70032389  pcpyld      $a0, $zero, $v1
    ctx->pc = 0x1ef610u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1ef614: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ef614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef618: 0xc09006c  jal         func_2401B0
    ctx->pc = 0x1EF618u;
    SET_GPR_U32(ctx, 31, 0x1EF620u);
    ctx->pc = 0x2401B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2401B0u, 0x1EF618u, 0x1EF620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF620u;
label_1ef620:
    // 0x1ef620: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF620u;
    {
        const bool branch_taken_0x1ef620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef620) {
            ctx->pc = 0x1EF638u;
            goto label_1ef638;
        }
    }
    ctx->pc = 0x1EF628u;
    // 0x1ef628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef62c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1ef62cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef630: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF630u;
    {
        const bool branch_taken_0x1ef630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef630) {
            ctx->pc = 0x1EF63Cu;
            goto label_1ef63c;
        }
    }
    ctx->pc = 0x1EF638u;
label_1ef638:
    // 0x1ef638: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ef638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef63c:
    // 0x1ef63c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ef63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef640:
    // 0x1ef640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ef640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef648: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ef648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ef64c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF654u;
    // 0x1ef654: 0x0  nop
    ctx->pc = 0x1ef654u;
    // NOP
    // 0x1ef658: 0x0  nop
    ctx->pc = 0x1ef658u;
    // NOP
    // 0x1ef65c: 0x0  nop
    ctx->pc = 0x1ef65cu;
    // NOP
    ctx->pc = 0x1ef660u;
}
