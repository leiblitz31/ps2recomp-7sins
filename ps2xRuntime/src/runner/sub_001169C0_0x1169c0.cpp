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

// Function: sub_001169C0
// Address: 0x1169c0 - 0x116f30
void sub_001169C0_0x1169c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001169C0_0x1169c0");
#endif

    switch (ctx->pc) {
        case 0x116a34u: goto label_116a34;
        case 0x116b40u: goto label_116b40;
        case 0x116c04u: goto label_116c04;
        case 0x116c54u: goto label_116c54;
        case 0x116c74u: goto label_116c74;
        case 0x116cb0u: goto label_116cb0;
        case 0x116d60u: goto label_116d60;
        case 0x116d9cu: goto label_116d9c;
        case 0x116dd4u: goto label_116dd4;
        case 0x116e84u: goto label_116e84;
        case 0x116ec0u: goto label_116ec0;
        default: break;
    }

    ctx->pc = 0x1169c0u;

    // 0x1169c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1169c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1169c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1169c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1169c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1169c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1169cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1169ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1169d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1169d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1169d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1169d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1169d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1169d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1169dc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1169dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1169e0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1169e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x1169e4: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x1169e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x1169e8: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x1169e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x1169ec: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x1169ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1169f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1169f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1169f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1169f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1169fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1169FCu;
    {
        const bool branch_taken_0x1169fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1169fc) {
            ctx->pc = 0x116A10u;
            goto label_116a10;
        }
    }
    ctx->pc = 0x116A04u;
    // 0x116a04: 0x8e14000c  lw          $s4, 0xC($s0)
    ctx->pc = 0x116a04u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x116a08: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x116A08u;
    {
        const bool branch_taken_0x116a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116a08) {
            ctx->pc = 0x116A54u;
            goto label_116a54;
        }
    }
    ctx->pc = 0x116A10u;
label_116a10:
    // 0x116a10: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x116a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x116a14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116A14u;
    {
        const bool branch_taken_0x116a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116a14) {
            ctx->pc = 0x116A28u;
            goto label_116a28;
        }
    }
    ctx->pc = 0x116A1Cu;
    // 0x116a1c: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x116a1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x116a20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x116A20u;
    {
        const bool branch_taken_0x116a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116a20) {
            ctx->pc = 0x116A54u;
            goto label_116a54;
        }
    }
    ctx->pc = 0x116A28u;
label_116a28:
    // 0x116a28: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x116a28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x116a2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x116A2Cu;
    {
        const bool branch_taken_0x116a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116a2c) {
            ctx->pc = 0x116A38u;
            goto label_116a38;
        }
    }
    ctx->pc = 0x116A34u;
label_116a34:
    // 0x116a34: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x116a34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_116a38:
    // 0x116a38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x116a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x116a3c: 0x0  nop
    ctx->pc = 0x116a3cu;
    // NOP
    // 0x116a40: 0x0  nop
    ctx->pc = 0x116a40u;
    // NOP
    // 0x116a44: 0x0  nop
    ctx->pc = 0x116a44u;
    // NOP
    // 0x116a48: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x116A48u;
    {
        const bool branch_taken_0x116a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116a48) {
            ctx->pc = 0x116A34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116a34;
        }
    }
    ctx->pc = 0x116A50u;
    // 0x116a50: 0x8e14000c  lw          $s4, 0xC($s0)
    ctx->pc = 0x116a50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_116a54:
    // 0x116a54: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116a58: 0x1202003c  beq         $s0, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x116A58u;
    {
        const bool branch_taken_0x116a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x116a58) {
            ctx->pc = 0x116B4Cu;
            goto label_116b4c;
        }
    }
    ctx->pc = 0x116A60u;
    // 0x116a60: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116a64: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x116a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x116a68: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x116a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x116a6c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116a70: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x116a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x116a74: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x116a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x116a78: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116a7c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x116a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x116a80: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x116A80u;
    {
        const bool branch_taken_0x116a80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x116a80) {
            ctx->pc = 0x116AC4u;
            goto label_116ac4;
        }
    }
    ctx->pc = 0x116A88u;
    // 0x116a88: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x116a88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x116a8c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x116A8Cu;
    {
        const bool branch_taken_0x116a8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x116a8c) {
            ctx->pc = 0x116A9Cu;
            goto label_116a9c;
        }
    }
    ctx->pc = 0x116A94u;
    // 0x116a94: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x116a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x116a98: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x116a98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_116a9c:
    // 0x116a9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x116a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x116aa0: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x116aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
    // 0x116aa4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116aa8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x116aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x116aac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x116aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x116ab0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116ab4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x116ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x116ab8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x116ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x116abc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x116ABCu;
    {
        const bool branch_taken_0x116abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116abc) {
            ctx->pc = 0x116AC8u;
            goto label_116ac8;
        }
    }
    ctx->pc = 0x116AC4u;
label_116ac4:
    // 0x116ac4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x116ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_116ac8:
    // 0x116ac8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x116ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116acc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x116accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116ad0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116ad4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116AD4u;
    {
        const bool branch_taken_0x116ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x116ad4) {
            ctx->pc = 0x116AECu;
            goto label_116aec;
        }
    }
    ctx->pc = 0x116ADCu;
    // 0x116adc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x116adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116ae0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x116ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x116ae4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x116AE4u;
    {
        const bool branch_taken_0x116ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116ae4) {
            ctx->pc = 0x116B24u;
            goto label_116b24;
        }
    }
    ctx->pc = 0x116AECu;
label_116aec:
    // 0x116aec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116af0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x116af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x116af4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x116af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x116af8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116afc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116AFCu;
    {
        const bool branch_taken_0x116afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x116afc) {
            ctx->pc = 0x116B18u;
            goto label_116b18;
        }
    }
    ctx->pc = 0x116B04u;
    // 0x116b04: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116b08: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x116b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x116b0c: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x116b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x116b10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116B10u;
    {
        const bool branch_taken_0x116b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116b10) {
            ctx->pc = 0x116B24u;
            goto label_116b24;
        }
    }
    ctx->pc = 0x116B18u;
label_116b18:
    // 0x116b18: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116b1c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x116b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x116b20: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x116b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_116b24:
    // 0x116b24: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116b28: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x116b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x116b2c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x116b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x116b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b34: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x116b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116b38: 0xc045bec  jal         func_116FB0
    ctx->pc = 0x116B38u;
    SET_GPR_U32(ctx, 31, 0x116B40u);
    ctx->pc = 0x116FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116FB0u, 0x116B38u, 0x116B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B40u;
label_116b40:
    // 0x116b40: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x116b40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116b44: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x116B44u;
    {
        const bool branch_taken_0x116b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116b44) {
            ctx->pc = 0x116C5Cu;
            goto label_116c5c;
        }
    }
    ctx->pc = 0x116B4Cu;
label_116b4c:
    // 0x116b4c: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x116b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x116b50: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x116B50u;
    {
        const bool branch_taken_0x116b50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x116b50) {
            ctx->pc = 0x116B60u;
            goto label_116b60;
        }
    }
    ctx->pc = 0x116B58u;
    // 0x116b58: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x116b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x116b5c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x116b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_116b60:
    // 0x116b60: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x116b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116b64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x116b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116b68: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116b6c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116B6Cu;
    {
        const bool branch_taken_0x116b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x116b6c) {
            ctx->pc = 0x116B84u;
            goto label_116b84;
        }
    }
    ctx->pc = 0x116B74u;
    // 0x116b74: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x116b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116b78: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x116b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x116b7c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x116B7Cu;
    {
        const bool branch_taken_0x116b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116b7c) {
            ctx->pc = 0x116BBCu;
            goto label_116bbc;
        }
    }
    ctx->pc = 0x116B84u;
label_116b84:
    // 0x116b84: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116b88: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x116b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x116b8c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x116b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x116b90: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116b94: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116B94u;
    {
        const bool branch_taken_0x116b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x116b94) {
            ctx->pc = 0x116BB0u;
            goto label_116bb0;
        }
    }
    ctx->pc = 0x116B9Cu;
    // 0x116b9c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116ba0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x116ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x116ba4: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x116ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
    // 0x116ba8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116BA8u;
    {
        const bool branch_taken_0x116ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116ba8) {
            ctx->pc = 0x116BBCu;
            goto label_116bbc;
        }
    }
    ctx->pc = 0x116BB0u;
label_116bb0:
    // 0x116bb0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116bb4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x116bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x116bb8: 0xac54000c  sw          $s4, 0xC($v0)
    ctx->pc = 0x116bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 20));
label_116bbc:
    // 0x116bbc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x116bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x116bc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x116bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116bc4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116bc8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x116BC8u;
    {
        const bool branch_taken_0x116bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x116bc8) {
            ctx->pc = 0x116C0Cu;
            goto label_116c0c;
        }
    }
    ctx->pc = 0x116BD0u;
    // 0x116bd0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116bd4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x116bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x116bd8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116BD8u;
    {
        const bool branch_taken_0x116bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116bd8) {
            ctx->pc = 0x116BF8u;
            goto label_116bf8;
        }
    }
    ctx->pc = 0x116BE0u;
    // 0x116be0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116be4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x116be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x116be8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x116be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x116bec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x116becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x116bf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116BF0u;
    {
        const bool branch_taken_0x116bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116bf0) {
            ctx->pc = 0x116C0Cu;
            goto label_116c0c;
        }
    }
    ctx->pc = 0x116BF8u;
label_116bf8:
    // 0x116bf8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x116bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bfc: 0xc045bdc  jal         func_116F70
    ctx->pc = 0x116BFCu;
    SET_GPR_U32(ctx, 31, 0x116C04u);
    ctx->pc = 0x116F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116F70u, 0x116BFCu, 0x116C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C04u;
label_116c04:
    // 0x116c04: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x116c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x116c08: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x116c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_116c0c:
    // 0x116c0c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x116c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x116c10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x116c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116c14: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116c18: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x116C18u;
    {
        const bool branch_taken_0x116c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x116c18) {
            ctx->pc = 0x116C5Cu;
            goto label_116c5c;
        }
    }
    ctx->pc = 0x116C20u;
    // 0x116c20: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116c24: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x116c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x116c28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116C28u;
    {
        const bool branch_taken_0x116c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116c28) {
            ctx->pc = 0x116C48u;
            goto label_116c48;
        }
    }
    ctx->pc = 0x116C30u;
    // 0x116c30: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x116c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116c34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x116c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x116c38: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x116c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x116c3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x116c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x116c40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116C40u;
    {
        const bool branch_taken_0x116c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116c40) {
            ctx->pc = 0x116C5Cu;
            goto label_116c5c;
        }
    }
    ctx->pc = 0x116C48u;
label_116c48:
    // 0x116c48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x116c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c4c: 0xc045bcc  jal         func_116F30
    ctx->pc = 0x116C4Cu;
    SET_GPR_U32(ctx, 31, 0x116C54u);
    ctx->pc = 0x116F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116F30u, 0x116C4Cu, 0x116C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C54u;
label_116c54:
    // 0x116c54: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x116c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x116c58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x116c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_116c5c:
    // 0x116c5c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x116c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116c60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x116c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x116c64: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x116C64u;
    {
        const bool branch_taken_0x116c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116c64) {
            ctx->pc = 0x116F04u;
            goto label_116f04;
        }
    }
    ctx->pc = 0x116C6Cu;
    // 0x116c6c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x116C6Cu;
    {
        const bool branch_taken_0x116c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116c6c) {
            ctx->pc = 0x116EC8u;
            goto label_116ec8;
        }
    }
    ctx->pc = 0x116C74u;
label_116c74:
    // 0x116c74: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x116c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x116c78: 0x1682004a  bne         $s4, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x116C78u;
    {
        const bool branch_taken_0x116c78 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x116c78) {
            ctx->pc = 0x116DA4u;
            goto label_116da4;
        }
    }
    ctx->pc = 0x116C80u;
    // 0x116c80: 0x8e33000c  lw          $s3, 0xC($s1)
    ctx->pc = 0x116c80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x116c84: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x116c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x116c88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x116c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x116c8c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x116C8Cu;
    {
        const bool branch_taken_0x116c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116c8c) {
            ctx->pc = 0x116CB4u;
            goto label_116cb4;
        }
    }
    ctx->pc = 0x116C94u;
    // 0x116c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116c98: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x116c98u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x116c9c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x116c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x116ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ca4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x116ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116ca8: 0xc0428ec  jal         func_10A3B0
    ctx->pc = 0x116CA8u;
    SET_GPR_U32(ctx, 31, 0x116CB0u);
    ctx->pc = 0x10A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A3B0u, 0x116CA8u, 0x116CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116CB0u;
label_116cb0:
    // 0x116cb0: 0x8e33000c  lw          $s3, 0xC($s1)
    ctx->pc = 0x116cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_116cb4:
    // 0x116cb4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x116cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x116cb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116CB8u;
    {
        const bool branch_taken_0x116cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116cb8) {
            ctx->pc = 0x116CD8u;
            goto label_116cd8;
        }
    }
    ctx->pc = 0x116CC0u;
    // 0x116cc0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x116cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x116cc4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x116cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116cc8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x116cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x116ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116cd0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x116CD0u;
    {
        const bool branch_taken_0x116cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x116cd0) {
            ctx->pc = 0x116D10u;
            goto label_116d10;
        }
    }
    ctx->pc = 0x116CD8u;
label_116cd8:
    // 0x116cd8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x116cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x116cdc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116CDCu;
    {
        const bool branch_taken_0x116cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116cdc) {
            ctx->pc = 0x116CFCu;
            goto label_116cfc;
        }
    }
    ctx->pc = 0x116CE4u;
    // 0x116ce4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x116ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x116ce8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x116ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116cec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x116cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x116cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116cf4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116CF4u;
    {
        const bool branch_taken_0x116cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x116cf4) {
            ctx->pc = 0x116D10u;
            goto label_116d10;
        }
    }
    ctx->pc = 0x116CFCu;
label_116cfc:
    // 0x116cfc: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x116cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x116d00: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x116d00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d04: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x116d04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x116d08: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x116D08u;
    {
        const bool branch_taken_0x116d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116d08) {
            ctx->pc = 0x116EC8u;
            goto label_116ec8;
        }
    }
    ctx->pc = 0x116D10u;
label_116d10:
    // 0x116d10: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x116d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x116d14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116D14u;
    {
        const bool branch_taken_0x116d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116d14) {
            ctx->pc = 0x116D34u;
            goto label_116d34;
        }
    }
    ctx->pc = 0x116D1Cu;
    // 0x116d1c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x116d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x116d20: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x116d20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116d24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x116d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x116d28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116d2c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x116D2Cu;
    {
        const bool branch_taken_0x116d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x116d2c) {
            ctx->pc = 0x116D64u;
            goto label_116d64;
        }
    }
    ctx->pc = 0x116D34u;
label_116d34:
    // 0x116d34: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x116d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x116d38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116D38u;
    {
        const bool branch_taken_0x116d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116d38) {
            ctx->pc = 0x116D4Cu;
            goto label_116d4c;
        }
    }
    ctx->pc = 0x116D40u;
    // 0x116d40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116d44: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x116d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x116d48: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x116d48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_116d4c:
    // 0x116d4c: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x116d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x116d50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x116d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d54: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x116d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116d58: 0xc042920  jal         func_10A480
    ctx->pc = 0x116D58u;
    SET_GPR_U32(ctx, 31, 0x116D60u);
    ctx->pc = 0x10A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A480u, 0x116D58u, 0x116D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D60u;
label_116d60:
    // 0x116d60: 0x8e33000c  lw          $s3, 0xC($s1)
    ctx->pc = 0x116d60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_116d64:
    // 0x116d64: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x116d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116d68: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x116d68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x116d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116d70: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x116d70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x116d74: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x116d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x116d78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116D78u;
    {
        const bool branch_taken_0x116d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116d78) {
            ctx->pc = 0x116D8Cu;
            goto label_116d8c;
        }
    }
    ctx->pc = 0x116D80u;
    // 0x116d80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116d84: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x116d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x116d88: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x116d88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_116d8c:
    // 0x116d8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d90: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x116d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116d94: 0xc0428ec  jal         func_10A3B0
    ctx->pc = 0x116D94u;
    SET_GPR_U32(ctx, 31, 0x116D9Cu);
    ctx->pc = 0x10A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A3B0u, 0x116D94u, 0x116D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D9Cu;
label_116d9c:
    // 0x116d9c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x116D9Cu;
    {
        const bool branch_taken_0x116d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116d9c) {
            ctx->pc = 0x116EF4u;
            goto label_116ef4;
        }
    }
    ctx->pc = 0x116DA4u;
label_116da4:
    // 0x116da4: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x116da4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x116da8: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x116da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x116dac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x116dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x116db0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x116DB0u;
    {
        const bool branch_taken_0x116db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116db0) {
            ctx->pc = 0x116DD8u;
            goto label_116dd8;
        }
    }
    ctx->pc = 0x116DB8u;
    // 0x116db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116dbc: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x116dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x116dc0: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x116dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x116dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116dc8: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x116dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116dcc: 0xc042920  jal         func_10A480
    ctx->pc = 0x116DCCu;
    SET_GPR_U32(ctx, 31, 0x116DD4u);
    ctx->pc = 0x10A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A480u, 0x116DCCu, 0x116DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DD4u;
label_116dd4:
    // 0x116dd4: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x116dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_116dd8:
    // 0x116dd8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x116dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x116ddc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116DDCu;
    {
        const bool branch_taken_0x116ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116ddc) {
            ctx->pc = 0x116DFCu;
            goto label_116dfc;
        }
    }
    ctx->pc = 0x116DE4u;
    // 0x116de4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x116de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x116de8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x116de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116dec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x116decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x116df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116df4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x116DF4u;
    {
        const bool branch_taken_0x116df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x116df4) {
            ctx->pc = 0x116E34u;
            goto label_116e34;
        }
    }
    ctx->pc = 0x116DFCu;
label_116dfc:
    // 0x116dfc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x116dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x116e00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116E00u;
    {
        const bool branch_taken_0x116e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116e00) {
            ctx->pc = 0x116E20u;
            goto label_116e20;
        }
    }
    ctx->pc = 0x116E08u;
    // 0x116e08: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x116e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x116e0c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x116e0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116e10: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x116e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x116e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116e18: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116E18u;
    {
        const bool branch_taken_0x116e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x116e18) {
            ctx->pc = 0x116E34u;
            goto label_116e34;
        }
    }
    ctx->pc = 0x116E20u;
label_116e20:
    // 0x116e20: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x116e20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x116e24: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x116e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e28: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x116e28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x116e2c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x116E2Cu;
    {
        const bool branch_taken_0x116e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116e2c) {
            ctx->pc = 0x116EC8u;
            goto label_116ec8;
        }
    }
    ctx->pc = 0x116E34u;
label_116e34:
    // 0x116e34: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x116e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x116e38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116E38u;
    {
        const bool branch_taken_0x116e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116e38) {
            ctx->pc = 0x116E58u;
            goto label_116e58;
        }
    }
    ctx->pc = 0x116E40u;
    // 0x116e40: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x116e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x116e44: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x116e44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116e48: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x116e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x116e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116e50: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x116E50u;
    {
        const bool branch_taken_0x116e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x116e50) {
            ctx->pc = 0x116E88u;
            goto label_116e88;
        }
    }
    ctx->pc = 0x116E58u;
label_116e58:
    // 0x116e58: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x116e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x116e5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116E5Cu;
    {
        const bool branch_taken_0x116e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116e5c) {
            ctx->pc = 0x116E70u;
            goto label_116e70;
        }
    }
    ctx->pc = 0x116E64u;
    // 0x116e64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116e68: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x116e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x116e6c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x116e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_116e70:
    // 0x116e70: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x116e70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x116e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x116e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e78: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x116e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116e7c: 0xc0428ec  jal         func_10A3B0
    ctx->pc = 0x116E7Cu;
    SET_GPR_U32(ctx, 31, 0x116E84u);
    ctx->pc = 0x10A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A3B0u, 0x116E7Cu, 0x116E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E84u;
label_116e84:
    // 0x116e84: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x116e84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_116e88:
    // 0x116e88: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x116e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116e8c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x116e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x116e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116e94: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x116e94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x116e98: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x116e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x116e9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116E9Cu;
    {
        const bool branch_taken_0x116e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116e9c) {
            ctx->pc = 0x116EB0u;
            goto label_116eb0;
        }
    }
    ctx->pc = 0x116EA4u;
    // 0x116ea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116ea8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x116ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x116eac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x116eacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_116eb0:
    // 0x116eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116eb4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x116eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116eb8: 0xc042920  jal         func_10A480
    ctx->pc = 0x116EB8u;
    SET_GPR_U32(ctx, 31, 0x116EC0u);
    ctx->pc = 0x10A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A480u, 0x116EB8u, 0x116EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EC0u;
label_116ec0:
    // 0x116ec0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x116EC0u;
    {
        const bool branch_taken_0x116ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116ec0) {
            ctx->pc = 0x116EF4u;
            goto label_116ef4;
        }
    }
    ctx->pc = 0x116EC8u;
label_116ec8:
    // 0x116ec8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x116ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116ecc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x116eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116ed0: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x116ED0u;
    {
        const bool branch_taken_0x116ed0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x116ed0) {
            ctx->pc = 0x116EF4u;
            goto label_116ef4;
        }
    }
    ctx->pc = 0x116ED8u;
    // 0x116ed8: 0x1280ff66  beqz        $s4, . + 4 + (-0x9A << 2)
    ctx->pc = 0x116ED8u;
    {
        const bool branch_taken_0x116ed8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x116ed8) {
            ctx->pc = 0x116C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116c74;
        }
    }
    ctx->pc = 0x116EE0u;
    // 0x116ee0: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x116ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x116ee4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x116ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x116ee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116eec: 0x1062ff61  beq         $v1, $v0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x116EECu;
    {
        const bool branch_taken_0x116eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x116eec) {
            ctx->pc = 0x116C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116c74;
        }
    }
    ctx->pc = 0x116EF4u;
label_116ef4:
    // 0x116ef4: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x116EF4u;
    {
        const bool branch_taken_0x116ef4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x116ef4) {
            ctx->pc = 0x116F04u;
            goto label_116f04;
        }
    }
    ctx->pc = 0x116EFCu;
    // 0x116efc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116f00: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x116f00u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_116f04:
    // 0x116f04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x116f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x116f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116f0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x116f0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116f10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x116f10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116f14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x116f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116f18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x116f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116f1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x116f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116f20: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x116f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x116f24: 0x3e00008  jr          $ra
    ctx->pc = 0x116F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116F2Cu;
    // 0x116f2c: 0x0  nop
    ctx->pc = 0x116f2cu;
    // NOP
    ctx->pc = 0x116f30u;
}
