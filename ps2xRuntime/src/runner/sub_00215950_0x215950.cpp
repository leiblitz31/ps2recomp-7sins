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

// Function: sub_00215950
// Address: 0x215950 - 0x2159b0
void sub_00215950_0x215950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215950_0x215950");
#endif

    switch (ctx->pc) {
        case 0x215974u: goto label_215974;
        default: break;
    }

    ctx->pc = 0x215950u;

    // 0x215950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x215950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x215954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x215954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x215958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x215958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21595c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x21595cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x215960: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x215960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x215964: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x215964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215968: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x215968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21596c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x21596Cu;
    SET_GPR_U32(ctx, 31, 0x215974u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x21596Cu, 0x215974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215974u;
label_215974:
    // 0x215974: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x215974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x215978: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215978u;
    {
        const bool branch_taken_0x215978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215978) {
            ctx->pc = 0x215990u;
            goto label_215990;
        }
    }
    ctx->pc = 0x215980u;
    // 0x215980: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x215980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215984: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x215984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215988: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x215988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x21598c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x21598cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_215990:
    // 0x215990: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x215990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x215994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x215998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21599c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x21599cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2159a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2159A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2159A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2159A8u;
    // 0x2159a8: 0x0  nop
    ctx->pc = 0x2159a8u;
    // NOP
    // 0x2159ac: 0x0  nop
    ctx->pc = 0x2159acu;
    // NOP
    ctx->pc = 0x2159b0u;
}
