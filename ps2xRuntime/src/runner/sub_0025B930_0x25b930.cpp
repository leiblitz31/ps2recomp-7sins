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

// Function: sub_0025B930
// Address: 0x25b930 - 0x25ba00
void sub_0025B930_0x25b930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B930_0x25b930");
#endif

    switch (ctx->pc) {
        case 0x25b950u: goto label_25b950;
        default: break;
    }

    ctx->pc = 0x25b930u;

    // 0x25b930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25b930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25b934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b938: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25b938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25b93c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25b940: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x25b940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x25b944: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25b944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b948: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x25B948u;
    SET_GPR_U32(ctx, 31, 0x25B950u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x25B948u, 0x25B950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B950u;
label_25b950:
    // 0x25b950: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x25B950u;
    {
        const bool branch_taken_0x25b950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b950) {
            ctx->pc = 0x25B9ECu;
            goto label_25b9ec;
        }
    }
    ctx->pc = 0x25B958u;
    // 0x25b958: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25b958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b95c: 0x4610010  bgez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x25B95Cu;
    {
        const bool branch_taken_0x25b95c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x25b95c) {
            ctx->pc = 0x25B9A0u;
            goto label_25b9a0;
        }
    }
    ctx->pc = 0x25B964u;
    // 0x25b964: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x25b964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x25b968: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x25b968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x25b96c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25b96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b970: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x25b970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x25b974: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x25b974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x25b978: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25b978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b97c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x25b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x25b980: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x25b980u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25b984: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x25B984u;
    {
        const bool branch_taken_0x25b984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b984) {
            ctx->pc = 0x25B9ACu;
            goto label_25b9ac;
        }
    }
    ctx->pc = 0x25B98Cu;
    // 0x25b98c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b990: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x25b990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x25b994: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x25b994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x25b998: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25B998u;
    {
        const bool branch_taken_0x25b998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b998) {
            ctx->pc = 0x25B9ECu;
            goto label_25b9ec;
        }
    }
    ctx->pc = 0x25B9A0u;
label_25b9a0:
    // 0x25b9a0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25b9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b9a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b9a8: 0xac640114  sw          $a0, 0x114($v1)
    ctx->pc = 0x25b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 4));
label_25b9ac:
    // 0x25b9ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b9b0: 0x8c65012c  lw          $a1, 0x12C($v1)
    ctx->pc = 0x25b9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x25b9b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25b9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b9b8: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x25b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x25b9bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25b9c0: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x25b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x25b9c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b9c8: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x25b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x25b9cc: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x25b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x25b9d0: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x25b9d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x25b9d4: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B9D4u;
    {
        const bool branch_taken_0x25b9d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b9d4) {
            ctx->pc = 0x25B9ECu;
            goto label_25b9ec;
        }
    }
    ctx->pc = 0x25B9DCu;
    // 0x25b9dc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x25b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x25b9e0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b9e4: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x25b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x25b9e8: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x25b9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
label_25b9ec:
    // 0x25b9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b9f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25b9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x25B9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B9FCu;
    // 0x25b9fc: 0x0  nop
    ctx->pc = 0x25b9fcu;
    // NOP
    ctx->pc = 0x25ba00u;
}
