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

// Function: sub_001BFDA0
// Address: 0x1bfda0 - 0x1c0040
void sub_001BFDA0_0x1bfda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFDA0_0x1bfda0");
#endif

    switch (ctx->pc) {
        case 0x1bfde4u: goto label_1bfde4;
        case 0x1bfdf0u: goto label_1bfdf0;
        case 0x1bfea4u: goto label_1bfea4;
        default: break;
    }

    ctx->pc = 0x1bfda0u;

    // 0x1bfda0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bfda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1bfda4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bfda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bfda8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bfda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bfdac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bfdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bfdb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bfdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bfdb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bfdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bfdb8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1bfdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1bfdbc: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1bfdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1bfdc0: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1bfdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1bfdc4: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1bfdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1bfdc8: 0xa3a80090  sb          $t0, 0x90($sp)
    ctx->pc = 0x1bfdc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 8));
    // 0x1bfdcc: 0xafa900a0  sw          $t1, 0xA0($sp)
    ctx->pc = 0x1bfdccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 9));
    // 0x1bfdd0: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x1bfdd0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfdd4: 0x8fb20070  lw          $s2, 0x70($sp)
    ctx->pc = 0x1bfdd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfdd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bfdd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfddc: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1BFDDCu;
    {
        const bool branch_taken_0x1bfddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfddc) {
            ctx->pc = 0x1C0014u;
            goto label_1c0014;
        }
    }
    ctx->pc = 0x1BFDE4u;
label_1bfde4:
    // 0x1bfde4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bfde4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfde8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1BFDE8u;
    {
        const bool branch_taken_0x1bfde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfde8) {
            ctx->pc = 0x1C0004u;
            goto label_1c0004;
        }
    }
    ctx->pc = 0x1BFDF0u;
label_1bfdf0:
    // 0x1bfdf0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1bfdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bfdf4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1bfdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bfdf8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1bfdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bfdfc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1bfdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfe00: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bfe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bfe04: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1bfe04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bfe08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bfe08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bfe0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bfe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bfe10: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bfe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bfe14: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1bfe14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1bfe18: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1bfe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfe1c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1bfe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bfe20: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bfe20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bfe24: 0x8c63be58  lw          $v1, -0x41A8($v1)
    ctx->pc = 0x1bfe24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1bfe28: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1bfe28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bfe2c: 0x10200074  beqz        $at, . + 4 + (0x74 << 2)
    ctx->pc = 0x1BFE2Cu;
    {
        const bool branch_taken_0x1bfe2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe2c) {
            ctx->pc = 0x1C0000u;
            goto label_1c0000;
        }
    }
    ctx->pc = 0x1BFE34u;
    // 0x1bfe34: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1bfe34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfe38: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x1bfe38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1bfe3c: 0x14600070  bnez        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x1BFE3Cu;
    {
        const bool branch_taken_0x1bfe3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe3c) {
            ctx->pc = 0x1C0000u;
            goto label_1c0000;
        }
    }
    ctx->pc = 0x1BFE44u;
    // 0x1bfe44: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1bfe44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bfe48: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bfe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bfe4c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1bfe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bfe50: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1bfe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfe54: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1bfe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfe58: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1bfe58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bfe5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bfe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bfe60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bfe60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bfe64: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1bfe64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bfe68: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1bfe68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfe6c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1bfe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfe70: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1bfe70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bfe74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bfe74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bfe78: 0x8ca200b4  lw          $v0, 0xB4($a1)
    ctx->pc = 0x1bfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x1bfe7c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1bfe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfe80: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1bfe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfe84: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1bfe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bfe88: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1bfe88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bfe8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfe90: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bfe90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bfe94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bfe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bfe98: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1bfe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfe9c: 0xc06edac  jal         func_1BB6B0
    ctx->pc = 0x1BFE9Cu;
    SET_GPR_U32(ctx, 31, 0x1BFEA4u);
    ctx->pc = 0x1BB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB6B0u, 0x1BFE9Cu, 0x1BFEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFEA4u;
label_1bfea4:
    // 0x1bfea4: 0x93a30090  lbu         $v1, 0x90($sp)
    ctx->pc = 0x1bfea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bfea8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BFEA8u;
    {
        const bool branch_taken_0x1bfea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfea8) {
            ctx->pc = 0x1BFF1Cu;
            goto label_1bff1c;
        }
    }
    ctx->pc = 0x1BFEB0u;
    // 0x1bfeb0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1bfeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfeb4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1bfeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfeb8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1bfeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bfebc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1bfebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bfec0: 0x8ca300b4  lw          $v1, 0xB4($a1)
    ctx->pc = 0x1bfec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x1bfec4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1bfec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bfec8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1bfec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfecc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1bfeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bfed0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bfed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1bfed4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bfed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bfed8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1bfed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bfedc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bfedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bfee0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bfee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bfee4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bfee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bfee8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bfee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfeec: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BFEECu;
    {
        const bool branch_taken_0x1bfeec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bfeec) {
            ctx->pc = 0x1BFF1Cu;
            goto label_1bff1c;
        }
    }
    ctx->pc = 0x1BFEF4u;
    // 0x1bfef4: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1bfef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bfef8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1bfef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bfefc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1bfefcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bff00: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1bff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bff04: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bff04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bff08: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1bff08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bff0c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bff10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bff10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bff14: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bff14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bff18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1bff18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1bff1c:
    // 0x1bff1c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1bff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bff20: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1BFF20u;
    {
        const bool branch_taken_0x1bff20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bff20) {
            ctx->pc = 0x1C0000u;
            goto label_1c0000;
        }
    }
    ctx->pc = 0x1BFF28u;
    // 0x1bff28: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1bff28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bff2c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1bff2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bff30: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1bff30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1bff34: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1bff34u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1bff38: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1bff38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bff3c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1bff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bff40: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1bff40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bff44: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1bff44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bff48: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bff48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bff4c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1bff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bff50: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bff50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bff54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bff54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bff58: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bff58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bff5c: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x1bff5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1bff60: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1bff60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1bff64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1bff64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1bff68: 0x14a3001b  bne         $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BFF68u;
    {
        const bool branch_taken_0x1bff68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bff68) {
            ctx->pc = 0x1BFFD8u;
            goto label_1bffd8;
        }
    }
    ctx->pc = 0x1BFF70u;
    // 0x1bff70: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1bff70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bff74: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1bff74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bff78: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1bff78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bff7c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1bff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bff80: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bff80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bff84: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1bff84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bff88: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bff88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bff8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bff90: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bff90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bff94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bff94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bff98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bff98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bff9c: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BFF9Cu;
    {
        const bool branch_taken_0x1bff9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bff9c) {
            ctx->pc = 0x1C0000u;
            goto label_1c0000;
        }
    }
    ctx->pc = 0x1BFFA4u;
    // 0x1bffa4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bffa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bffa8: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1bffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bffac: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1bffacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bffb0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1bffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bffb4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1bffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bffb8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bffbc: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1bffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bffc0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bffc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bffc8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bffcc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1bffccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1bffd0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BFFD0u;
    {
        const bool branch_taken_0x1bffd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bffd0) {
            ctx->pc = 0x1C0000u;
            goto label_1c0000;
        }
    }
    ctx->pc = 0x1BFFD8u;
label_1bffd8:
    // 0x1bffd8: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1bffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bffdc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1bffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bffe0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1bffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bffe4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1bffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bffe8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bffec: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1bffecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bfff0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bfff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bfff4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bfff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bfff8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bfff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bfffc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1bfffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1c0000:
    // 0x1c0000: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c0000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c0004:
    // 0x1c0004: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1c0004u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c0008: 0x1460ff79  bnez        $v1, . + 4 + (-0x87 << 2)
    ctx->pc = 0x1C0008u;
    {
        const bool branch_taken_0x1c0008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0008) {
            ctx->pc = 0x1BFDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfdf0;
        }
    }
    ctx->pc = 0x1C0010u;
    // 0x1c0010: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c0010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c0014:
    // 0x1c0014: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1c0014u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c0018: 0x1460ff72  bnez        $v1, . + 4 + (-0x8E << 2)
    ctx->pc = 0x1C0018u;
    {
        const bool branch_taken_0x1c0018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0018) {
            ctx->pc = 0x1BFDE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfde4;
        }
    }
    ctx->pc = 0x1C0020u;
    // 0x1c0020: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c0020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0024: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c0024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c0028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c002c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c002cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0034: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1c0034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c0038: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0040u;
}
