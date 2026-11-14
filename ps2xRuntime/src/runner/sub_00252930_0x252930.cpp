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

// Function: sub_00252930
// Address: 0x252930 - 0x252990
void sub_00252930_0x252930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252930_0x252930");
#endif

    switch (ctx->pc) {
        case 0x252954u: goto label_252954;
        case 0x252970u: goto label_252970;
        default: break;
    }

    ctx->pc = 0x252930u;

    // 0x252930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x252930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x252934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25293c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25293cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x252940: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x252940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x252944: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x252944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x252948: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x252948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25294c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x25294Cu;
    SET_GPR_U32(ctx, 31, 0x252954u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x25294Cu, 0x252954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252954u;
label_252954:
    // 0x252954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x252954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252958: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252958u;
    {
        const bool branch_taken_0x252958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x252958) {
            ctx->pc = 0x252974u;
            goto label_252974;
        }
    }
    ctx->pc = 0x252960u;
    // 0x252960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252964: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x252964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252968: 0xc094ae0  jal         func_252B80
    ctx->pc = 0x252968u;
    SET_GPR_U32(ctx, 31, 0x252970u);
    ctx->pc = 0x252B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252B80u, 0x252968u, 0x252970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252970u;
label_252970:
    // 0x252970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x252970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252974:
    // 0x252974: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25297c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25297cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252980: 0x3e00008  jr          $ra
    ctx->pc = 0x252980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252988u;
    // 0x252988: 0x0  nop
    ctx->pc = 0x252988u;
    // NOP
    // 0x25298c: 0x0  nop
    ctx->pc = 0x25298cu;
    // NOP
    ctx->pc = 0x252990u;
}
