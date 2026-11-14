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

// Function: sub_001C0300
// Address: 0x1c0300 - 0x1c0450
void sub_001C0300_0x1c0300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0300_0x1c0300");
#endif

    switch (ctx->pc) {
        case 0x1c034cu: goto label_1c034c;
        case 0x1c0358u: goto label_1c0358;
        default: break;
    }

    ctx->pc = 0x1c0300u;

    // 0x1c0300: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c0300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c0304: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c0304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c0308: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c030c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c030cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0310: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0314: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1c0314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1c0318: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x1c0318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x1c031c: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x1c031cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x1c0320: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x1c0320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x1c0324: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x1c0324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
    // 0x1c0328: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c0328u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c032c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c032cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0330: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c0330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c0334: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1c0334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1c0338: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1c0338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c033c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1c033cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1c0340: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0344: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1C0344u;
    {
        const bool branch_taken_0x1c0344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0344) {
            ctx->pc = 0x1C0420u;
            goto label_1c0420;
        }
    }
    ctx->pc = 0x1C034Cu;
label_1c034c:
    // 0x1c034c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c034cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0350: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1C0350u;
    {
        const bool branch_taken_0x1c0350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0350) {
            ctx->pc = 0x1C0410u;
            goto label_1c0410;
        }
    }
    ctx->pc = 0x1C0358u;
label_1c0358:
    // 0x1c0358: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1c0358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c035c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c035cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c0360: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1c0360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c0364: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c0364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0368: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1c0368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c036c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c036cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c0370: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c0370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c0374: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c0374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c0378: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c0378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c037c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c0380: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c0380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0384: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C0384u;
    {
        const bool branch_taken_0x1c0384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0384) {
            ctx->pc = 0x1C040Cu;
            goto label_1c040c;
        }
    }
    ctx->pc = 0x1C038Cu;
    // 0x1c038c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1c038cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c0390: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0390u;
    {
        const bool branch_taken_0x1c0390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0390) {
            ctx->pc = 0x1C03B0u;
            goto label_1c03b0;
        }
    }
    ctx->pc = 0x1C0398u;
    // 0x1c0398: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0398u;
    {
        const bool branch_taken_0x1c0398 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0398) {
            ctx->pc = 0x1C03B0u;
            goto label_1c03b0;
        }
    }
    ctx->pc = 0x1C03A0u;
    // 0x1c03a0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1c03a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c03a4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1c03a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1c03a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c03a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c03ac: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x1c03acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c03b0:
    // 0x1c03b0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c03b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c03b4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C03B4u;
    {
        const bool branch_taken_0x1c03b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c03b4) {
            ctx->pc = 0x1C03D4u;
            goto label_1c03d4;
        }
    }
    ctx->pc = 0x1C03BCu;
    // 0x1c03bc: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C03BCu;
    {
        const bool branch_taken_0x1c03bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c03bc) {
            ctx->pc = 0x1C03D4u;
            goto label_1c03d4;
        }
    }
    ctx->pc = 0x1C03C4u;
    // 0x1c03c4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c03c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c03c8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c03c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1c03cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c03ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c03d0: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1c03d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c03d4:
    // 0x1c03d4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1c03d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c03d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c03d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c03dc: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1c03dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1c03e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C03E0u;
    {
        const bool branch_taken_0x1c03e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c03e0) {
            ctx->pc = 0x1C03F0u;
            goto label_1c03f0;
        }
    }
    ctx->pc = 0x1C03E8u;
    // 0x1c03e8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1c03e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c03ec: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1c03ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1c03f0:
    // 0x1c03f0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c03f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c03f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c03f8: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x1c03f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1c03fc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C03FCu;
    {
        const bool branch_taken_0x1c03fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c03fc) {
            ctx->pc = 0x1C040Cu;
            goto label_1c040c;
        }
    }
    ctx->pc = 0x1C0404u;
    // 0x1c0404: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c0404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c0408: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c0408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1c040c:
    // 0x1c040c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c040cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c0410:
    // 0x1c0410: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1c0410u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c0414: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1C0414u;
    {
        const bool branch_taken_0x1c0414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0414) {
            ctx->pc = 0x1C0358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0358;
        }
    }
    ctx->pc = 0x1C041Cu;
    // 0x1c041c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c041cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c0420:
    // 0x1c0420: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1c0420u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c0424: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1C0424u;
    {
        const bool branch_taken_0x1c0424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0424) {
            ctx->pc = 0x1C034Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c034c;
        }
    }
    ctx->pc = 0x1C042Cu;
    // 0x1c042c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c042cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0430: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c0430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c043c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1c043cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c0440: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0448u;
    // 0x1c0448: 0x0  nop
    ctx->pc = 0x1c0448u;
    // NOP
    // 0x1c044c: 0x0  nop
    ctx->pc = 0x1c044cu;
    // NOP
    ctx->pc = 0x1c0450u;
}
