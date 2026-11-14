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

// Function: sub_001BFA50
// Address: 0x1bfa50 - 0x1bfc10
void sub_001BFA50_0x1bfa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFA50_0x1bfa50");
#endif

    switch (ctx->pc) {
        case 0x1bfa8cu: goto label_1bfa8c;
        case 0x1bfab0u: goto label_1bfab0;
        case 0x1bfac8u: goto label_1bfac8;
        case 0x1bfad4u: goto label_1bfad4;
        case 0x1bfb88u: goto label_1bfb88;
        case 0x1bfbe0u: goto label_1bfbe0;
        default: break;
    }

    ctx->pc = 0x1bfa50u;

    // 0x1bfa50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bfa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1bfa54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bfa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1bfa58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bfa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bfa5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bfa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bfa60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bfa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bfa64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bfa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bfa68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bfa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bfa6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bfa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bfa70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bfa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bfa74: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1bfa74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x1bfa78: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x1bfa78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x1bfa7c: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x1bfa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x1bfa80: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1bfa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfa84: 0xc0702a8  jal         func_1C0AA0
    ctx->pc = 0x1BFA84u;
    SET_GPR_U32(ctx, 31, 0x1BFA8Cu);
    ctx->pc = 0x1C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0AA0u, 0x1BFA84u, 0x1BFA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA8Cu;
label_1bfa8c:
    // 0x1bfa8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bfa8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa90: 0x8e930008  lw          $s3, 0x8($s4)
    ctx->pc = 0x1bfa90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1bfa94: 0x8e92000c  lw          $s2, 0xC($s4)
    ctx->pc = 0x1bfa94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1bfa98: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1bfa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfa9c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1bfa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bfaa0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1bfaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfaa4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bfaa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfaa8: 0xc070194  jal         func_1C0650
    ctx->pc = 0x1BFAA8u;
    SET_GPR_U32(ctx, 31, 0x1BFAB0u);
    ctx->pc = 0x1C0650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0650u, 0x1BFAA8u, 0x1BFAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFAB0u;
label_1bfab0:
    // 0x1bfab0: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x1bfab0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bfab4: 0x12c0004a  beqz        $s6, . + 4 + (0x4A << 2)
    ctx->pc = 0x1BFAB4u;
    {
        const bool branch_taken_0x1bfab4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfab4) {
            ctx->pc = 0x1BFBE0u;
            goto label_1bfbe0;
        }
    }
    ctx->pc = 0x1BFABCu;
    // 0x1bfabc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bfabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfac0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1BFAC0u;
    {
        const bool branch_taken_0x1bfac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfac0) {
            ctx->pc = 0x1BFBA4u;
            goto label_1bfba4;
        }
    }
    ctx->pc = 0x1BFAC8u;
label_1bfac8:
    // 0x1bfac8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bfac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfacc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1BFACCu;
    {
        const bool branch_taken_0x1bfacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfacc) {
            ctx->pc = 0x1BFB94u;
            goto label_1bfb94;
        }
    }
    ctx->pc = 0x1BFAD4u;
label_1bfad4:
    // 0x1bfad4: 0x251182b  sltu        $v1, $s2, $s1
    ctx->pc = 0x1bfad4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1bfad8: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BFAD8u;
    {
        const bool branch_taken_0x1bfad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfad8) {
            ctx->pc = 0x1BFB90u;
            goto label_1bfb90;
        }
    }
    ctx->pc = 0x1BFAE0u;
    // 0x1bfae0: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x1bfae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1bfae4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bfae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bfae8: 0x8c63be58  lw          $v1, -0x41A8($v1)
    ctx->pc = 0x1bfae8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1bfaec: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1bfaecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bfaf0: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1BFAF0u;
    {
        const bool branch_taken_0x1bfaf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfaf0) {
            ctx->pc = 0x1BFB90u;
            goto label_1bfb90;
        }
    }
    ctx->pc = 0x1BFAF8u;
    // 0x1bfaf8: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1bfaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bfafc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1bfafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bfb00: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1bfb00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bfb04: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1bfb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bfb08: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bfb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bfb0c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1bfb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bfb10: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bfb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bfb14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bfb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bfb18: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bfb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bfb1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bfb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bfb20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bfb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfb24: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BFB24u;
    {
        const bool branch_taken_0x1bfb24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bfb24) {
            ctx->pc = 0x1BFB90u;
            goto label_1bfb90;
        }
    }
    ctx->pc = 0x1BFB2Cu;
    // 0x1bfb2c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1bfb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfb30: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x1bfb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1bfb34: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bfb34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bfb38: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x1bfb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x1bfb3c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1bfb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfb40: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x1bfb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1bfb44: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1bfb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bfb48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfb4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bfb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bfb50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bfb54: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x1bfb54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfb58: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1bfb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bfb5c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bfb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bfb60: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1bfb60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bfb64: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1bfb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bfb68: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1bfb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfb6c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1bfb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bfb70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bfb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bfb74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bfb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bfb78: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1bfb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bfb7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bfb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb80: 0xc06edac  jal         func_1BB6B0
    ctx->pc = 0x1BFB80u;
    SET_GPR_U32(ctx, 31, 0x1BFB88u);
    ctx->pc = 0x1BB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB6B0u, 0x1BFB80u, 0x1BFB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB88u;
label_1bfb88:
    // 0x1bfb88: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1bfb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bfb8c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1bfb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_1bfb90:
    // 0x1bfb90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bfb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bfb94:
    // 0x1bfb94: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1bfb94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bfb98: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1BFB98u;
    {
        const bool branch_taken_0x1bfb98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfb98) {
            ctx->pc = 0x1BFAD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfad4;
        }
    }
    ctx->pc = 0x1BFBA0u;
    // 0x1bfba0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bfba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bfba4:
    // 0x1bfba4: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1bfba4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bfba8: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1BFBA8u;
    {
        const bool branch_taken_0x1bfba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfba8) {
            ctx->pc = 0x1BFAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfac8;
        }
    }
    ctx->pc = 0x1BFBB0u;
    // 0x1bfbb0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1bfbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bfbb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bfbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfbb8: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BFBB8u;
    {
        const bool branch_taken_0x1bfbb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bfbb8) {
            ctx->pc = 0x1BFBE0u;
            goto label_1bfbe0;
        }
    }
    ctx->pc = 0x1BFBC0u;
    // 0x1bfbc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bfbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bfbc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bfbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bfbc8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1bfbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1bfbcc: 0x278595d8  addiu       $a1, $gp, -0x6A28
    ctx->pc = 0x1bfbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940120));
    // 0x1bfbd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bfbd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfbd4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1bfbd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfbd8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1BFBD8u;
    SET_GPR_U32(ctx, 31, 0x1BFBE0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1BFBD8u, 0x1BFBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBE0u;
label_1bfbe0:
    // 0x1bfbe0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bfbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfbe4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bfbe4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfbe8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bfbe8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfbec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bfbecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfbf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bfbf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bfbf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bfbf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfbf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfbf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfbfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bfbfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfc00: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1bfc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bfc04: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFC0Cu;
    // 0x1bfc0c: 0x0  nop
    ctx->pc = 0x1bfc0cu;
    // NOP
    ctx->pc = 0x1bfc10u;
}
