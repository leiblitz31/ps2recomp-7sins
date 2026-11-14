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

// Function: sub_002918B0
// Address: 0x2918b0 - 0x291ac0
void sub_002918B0_0x2918b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002918B0_0x2918b0");
#endif

    switch (ctx->pc) {
        case 0x2918f4u: goto label_2918f4;
        default: break;
    }

    ctx->pc = 0x2918b0u;

    // 0x2918b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2918b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2918b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2918b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2918b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2918b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2918bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2918bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2918c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2918c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2918c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2918c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2918c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2918c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2918cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2918ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2918d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2918d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2918d4: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x2918d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2918d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2918D8u;
    {
        const bool branch_taken_0x2918d8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2918d8) {
            ctx->pc = 0x2918E8u;
            goto label_2918e8;
        }
    }
    ctx->pc = 0x2918E0u;
    // 0x2918e0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2918e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2918e4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2918e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2918e8:
    // 0x2918e8: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x2918e8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2918ec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2918ECu;
    {
        const bool branch_taken_0x2918ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2918ec) {
            ctx->pc = 0x2919B8u;
            goto label_2919b8;
        }
    }
    ctx->pc = 0x2918F4u;
label_2918f4:
    // 0x2918f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2918f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2918f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2918f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2918fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2918fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291900: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x291900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291904: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291904u;
    {
        const bool branch_taken_0x291904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291904) {
            ctx->pc = 0x291918u;
            goto label_291918;
        }
    }
    ctx->pc = 0x29190Cu;
    // 0x29190c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291910: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x291910u;
    {
        const bool branch_taken_0x291910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291910) {
            ctx->pc = 0x291AACu;
            goto label_291aac;
        }
    }
    ctx->pc = 0x291918u;
label_291918:
    // 0x291918: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29191c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x291920: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x291920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x291924: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291928: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x291928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29192c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291930: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x291930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291934: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291934u;
    {
        const bool branch_taken_0x291934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291934) {
            ctx->pc = 0x291948u;
            goto label_291948;
        }
    }
    ctx->pc = 0x29193Cu;
    // 0x29193c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291940: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x291940u;
    {
        const bool branch_taken_0x291940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291940) {
            ctx->pc = 0x291AACu;
            goto label_291aac;
        }
    }
    ctx->pc = 0x291948u;
label_291948:
    // 0x291948: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29194c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29194cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x291950: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x291950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x291954: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291958: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x291958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29195c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291960: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x291960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291964: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291964u;
    {
        const bool branch_taken_0x291964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291964) {
            ctx->pc = 0x291978u;
            goto label_291978;
        }
    }
    ctx->pc = 0x29196Cu;
    // 0x29196c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29196cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291970: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x291970u;
    {
        const bool branch_taken_0x291970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291970) {
            ctx->pc = 0x291AACu;
            goto label_291aac;
        }
    }
    ctx->pc = 0x291978u;
label_291978:
    // 0x291978: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29197c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x291980: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x291980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x291984: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291988: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x291988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29198c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29198cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291990: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x291990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291994: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291994u;
    {
        const bool branch_taken_0x291994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291994) {
            ctx->pc = 0x2919A8u;
            goto label_2919a8;
        }
    }
    ctx->pc = 0x29199Cu;
    // 0x29199c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2919a0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2919A0u;
    {
        const bool branch_taken_0x2919a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2919a0) {
            ctx->pc = 0x291AACu;
            goto label_291aac;
        }
    }
    ctx->pc = 0x2919A8u;
label_2919a8:
    // 0x2919a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2919a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2919ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2919acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2919b0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2919b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2919b4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2919b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2919b8:
    // 0x2919b8: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2919B8u;
    {
        const bool branch_taken_0x2919b8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2919b8) {
            ctx->pc = 0x2918F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2918f4;
        }
    }
    ctx->pc = 0x2919C0u;
    // 0x2919c0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2919c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2919c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2919c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2919c8: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2919c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2919cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2919ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2919d0: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x2919d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2919d4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2919D4u;
    {
        const bool branch_taken_0x2919d4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2919d4) {
            ctx->pc = 0x2919E4u;
            goto label_2919e4;
        }
    }
    ctx->pc = 0x2919DCu;
    // 0x2919dc: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x2919dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2919e0: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2919e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_2919e4:
    // 0x2919e4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2919E4u;
    {
        const bool branch_taken_0x2919e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2919e4) {
            ctx->pc = 0x291AA8u;
            goto label_291aa8;
        }
    }
    ctx->pc = 0x2919ECu;
    // 0x2919ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2919ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2919f0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2919F0u;
    {
        const bool branch_taken_0x2919f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2919f0) {
            ctx->pc = 0x291A78u;
            goto label_291a78;
        }
    }
    ctx->pc = 0x2919F8u;
    // 0x2919f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2919f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2919fc: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2919FCu;
    {
        const bool branch_taken_0x2919fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2919fc) {
            ctx->pc = 0x291A48u;
            goto label_291a48;
        }
    }
    ctx->pc = 0x291A04u;
    // 0x291a04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x291a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x291a08: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291A08u;
    {
        const bool branch_taken_0x291a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x291a08) {
            ctx->pc = 0x291A18u;
            goto label_291a18;
        }
    }
    ctx->pc = 0x291A10u;
    // 0x291a10: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x291A10u;
    {
        const bool branch_taken_0x291a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291a10) {
            ctx->pc = 0x291AA8u;
            goto label_291aa8;
        }
    }
    ctx->pc = 0x291A18u;
label_291a18:
    // 0x291a18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291a1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x291a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291a20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x291a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291a24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x291a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291a28: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291A28u;
    {
        const bool branch_taken_0x291a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291a28) {
            ctx->pc = 0x291A3Cu;
            goto label_291a3c;
        }
    }
    ctx->pc = 0x291A30u;
    // 0x291a30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291a34: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x291A34u;
    {
        const bool branch_taken_0x291a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291a34) {
            ctx->pc = 0x291AACu;
            goto label_291aac;
        }
    }
    ctx->pc = 0x291A3Cu;
label_291a3c:
    // 0x291a3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291a40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x291a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x291a44: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x291a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_291a48:
    // 0x291a48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291a4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x291a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291a50: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x291a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291a54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x291a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291a58: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291A58u;
    {
        const bool branch_taken_0x291a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291a58) {
            ctx->pc = 0x291A6Cu;
            goto label_291a6c;
        }
    }
    ctx->pc = 0x291A60u;
    // 0x291a60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291a64: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x291A64u;
    {
        const bool branch_taken_0x291a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291a64) {
            ctx->pc = 0x291AACu;
            goto label_291aac;
        }
    }
    ctx->pc = 0x291A6Cu;
label_291a6c:
    // 0x291a6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291a70: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x291a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x291a74: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x291a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_291a78:
    // 0x291a78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291a7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x291a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291a80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x291a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291a84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x291a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291a88: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291A88u;
    {
        const bool branch_taken_0x291a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291a88) {
            ctx->pc = 0x291A9Cu;
            goto label_291a9c;
        }
    }
    ctx->pc = 0x291A90u;
    // 0x291a90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291a94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x291A94u;
    {
        const bool branch_taken_0x291a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291a94) {
            ctx->pc = 0x291AACu;
            goto label_291aac;
        }
    }
    ctx->pc = 0x291A9Cu;
label_291a9c:
    // 0x291a9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291aa0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x291aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x291aa4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x291aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_291aa8:
    // 0x291aa8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x291aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_291aac:
    // 0x291aac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291ab0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x291ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x291ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x291AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291ABCu;
    // 0x291abc: 0x0  nop
    ctx->pc = 0x291abcu;
    // NOP
    ctx->pc = 0x291ac0u;
}
