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

// Function: sub_001D1300
// Address: 0x1d1300 - 0x1d13c0
void sub_001D1300_0x1d1300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1300_0x1d1300");
#endif

    switch (ctx->pc) {
        case 0x1d1338u: goto label_1d1338;
        case 0x1d1374u: goto label_1d1374;
        case 0x1d1384u: goto label_1d1384;
        default: break;
    }

    ctx->pc = 0x1d1300u;

    // 0x1d1300: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d1300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d1304: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d1304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d1308: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d1308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d130c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d1310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1318: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1d1318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1d131c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1d131cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d1320: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d1320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d1324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d1324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d1328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d1328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d132c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1d132cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d1330: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1D1330u;
    SET_GPR_U32(ctx, 31, 0x1D1338u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1D1330u, 0x1D1338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1338u;
label_1d1338:
    // 0x1d1338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d1338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d133c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D133Cu;
    {
        const bool branch_taken_0x1d133c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d133c) {
            ctx->pc = 0x1D1398u;
            goto label_1d1398;
        }
    }
    ctx->pc = 0x1D1344u;
    // 0x1d1344: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1d1344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d1348: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d1348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d134c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1d134cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1350: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1d1350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1d1354: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1d1354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d1358: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d1358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d135c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d1360: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d1360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d1364: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x1d1364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d1368: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1d1368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d136c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D136Cu;
    {
        const bool branch_taken_0x1d136c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d136c) {
            ctx->pc = 0x1D1388u;
            goto label_1d1388;
        }
    }
    ctx->pc = 0x1D1374u;
label_1d1374:
    // 0x1d1374: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1d1374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1d1378: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d1378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d137c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1D137Cu;
    SET_GPR_U32(ctx, 31, 0x1D1384u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1D137Cu, 0x1D1384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1384u;
label_1d1384:
    // 0x1d1384: 0x26520024  addiu       $s2, $s2, 0x24
    ctx->pc = 0x1d1384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_1d1388:
    // 0x1d1388: 0x0  nop
    ctx->pc = 0x1d1388u;
    // NOP
    // 0x1d138c: 0x1653fff9  bne         $s2, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D138Cu;
    {
        const bool branch_taken_0x1d138c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x1d138c) {
            ctx->pc = 0x1D1374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1374;
        }
    }
    ctx->pc = 0x1D1394u;
    // 0x1d1394: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1d1394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1398:
    // 0x1d1398: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d1398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d139c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d139cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d13a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d13a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d13a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d13a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d13a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d13a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d13ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d13acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d13b0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1d13b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d13b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D13B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D13B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D13BCu;
    // 0x1d13bc: 0x0  nop
    ctx->pc = 0x1d13bcu;
    // NOP
    ctx->pc = 0x1d13c0u;
}
