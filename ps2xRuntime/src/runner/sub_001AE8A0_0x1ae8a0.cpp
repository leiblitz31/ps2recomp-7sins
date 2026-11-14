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

// Function: sub_001AE8A0
// Address: 0x1ae8a0 - 0x1aebd0
void sub_001AE8A0_0x1ae8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE8A0_0x1ae8a0");
#endif

    switch (ctx->pc) {
        case 0x1ae8a0u: goto label_1ae8a0;
        case 0x1ae8a4u: goto label_1ae8a4;
        case 0x1ae8a8u: goto label_1ae8a8;
        case 0x1ae8acu: goto label_1ae8ac;
        case 0x1ae8b0u: goto label_1ae8b0;
        case 0x1ae8b4u: goto label_1ae8b4;
        case 0x1ae8b8u: goto label_1ae8b8;
        case 0x1ae8bcu: goto label_1ae8bc;
        case 0x1ae8c0u: goto label_1ae8c0;
        case 0x1ae8c4u: goto label_1ae8c4;
        case 0x1ae8c8u: goto label_1ae8c8;
        case 0x1ae8ccu: goto label_1ae8cc;
        case 0x1ae8d0u: goto label_1ae8d0;
        case 0x1ae8d4u: goto label_1ae8d4;
        case 0x1ae8d8u: goto label_1ae8d8;
        case 0x1ae8dcu: goto label_1ae8dc;
        case 0x1ae8e0u: goto label_1ae8e0;
        case 0x1ae8e4u: goto label_1ae8e4;
        case 0x1ae8e8u: goto label_1ae8e8;
        case 0x1ae8ecu: goto label_1ae8ec;
        case 0x1ae8f0u: goto label_1ae8f0;
        case 0x1ae8f4u: goto label_1ae8f4;
        case 0x1ae8f8u: goto label_1ae8f8;
        case 0x1ae8fcu: goto label_1ae8fc;
        case 0x1ae900u: goto label_1ae900;
        case 0x1ae904u: goto label_1ae904;
        case 0x1ae908u: goto label_1ae908;
        case 0x1ae90cu: goto label_1ae90c;
        case 0x1ae910u: goto label_1ae910;
        case 0x1ae914u: goto label_1ae914;
        case 0x1ae918u: goto label_1ae918;
        case 0x1ae91cu: goto label_1ae91c;
        case 0x1ae920u: goto label_1ae920;
        case 0x1ae924u: goto label_1ae924;
        case 0x1ae928u: goto label_1ae928;
        case 0x1ae92cu: goto label_1ae92c;
        case 0x1ae930u: goto label_1ae930;
        case 0x1ae934u: goto label_1ae934;
        case 0x1ae938u: goto label_1ae938;
        case 0x1ae93cu: goto label_1ae93c;
        case 0x1ae940u: goto label_1ae940;
        case 0x1ae944u: goto label_1ae944;
        case 0x1ae948u: goto label_1ae948;
        case 0x1ae94cu: goto label_1ae94c;
        case 0x1ae950u: goto label_1ae950;
        case 0x1ae954u: goto label_1ae954;
        case 0x1ae958u: goto label_1ae958;
        case 0x1ae95cu: goto label_1ae95c;
        case 0x1ae960u: goto label_1ae960;
        case 0x1ae964u: goto label_1ae964;
        case 0x1ae968u: goto label_1ae968;
        case 0x1ae96cu: goto label_1ae96c;
        case 0x1ae970u: goto label_1ae970;
        case 0x1ae974u: goto label_1ae974;
        case 0x1ae978u: goto label_1ae978;
        case 0x1ae97cu: goto label_1ae97c;
        case 0x1ae980u: goto label_1ae980;
        case 0x1ae984u: goto label_1ae984;
        case 0x1ae988u: goto label_1ae988;
        case 0x1ae98cu: goto label_1ae98c;
        case 0x1ae990u: goto label_1ae990;
        case 0x1ae994u: goto label_1ae994;
        case 0x1ae998u: goto label_1ae998;
        case 0x1ae99cu: goto label_1ae99c;
        case 0x1ae9a0u: goto label_1ae9a0;
        case 0x1ae9a4u: goto label_1ae9a4;
        case 0x1ae9a8u: goto label_1ae9a8;
        case 0x1ae9acu: goto label_1ae9ac;
        case 0x1ae9b0u: goto label_1ae9b0;
        case 0x1ae9b4u: goto label_1ae9b4;
        case 0x1ae9b8u: goto label_1ae9b8;
        case 0x1ae9bcu: goto label_1ae9bc;
        case 0x1ae9c0u: goto label_1ae9c0;
        case 0x1ae9c4u: goto label_1ae9c4;
        case 0x1ae9c8u: goto label_1ae9c8;
        case 0x1ae9ccu: goto label_1ae9cc;
        case 0x1ae9d0u: goto label_1ae9d0;
        case 0x1ae9d4u: goto label_1ae9d4;
        case 0x1ae9d8u: goto label_1ae9d8;
        case 0x1ae9dcu: goto label_1ae9dc;
        case 0x1ae9e0u: goto label_1ae9e0;
        case 0x1ae9e4u: goto label_1ae9e4;
        case 0x1ae9e8u: goto label_1ae9e8;
        case 0x1ae9ecu: goto label_1ae9ec;
        case 0x1ae9f0u: goto label_1ae9f0;
        case 0x1ae9f4u: goto label_1ae9f4;
        case 0x1ae9f8u: goto label_1ae9f8;
        case 0x1ae9fcu: goto label_1ae9fc;
        case 0x1aea00u: goto label_1aea00;
        case 0x1aea04u: goto label_1aea04;
        case 0x1aea08u: goto label_1aea08;
        case 0x1aea0cu: goto label_1aea0c;
        case 0x1aea10u: goto label_1aea10;
        case 0x1aea14u: goto label_1aea14;
        case 0x1aea18u: goto label_1aea18;
        case 0x1aea1cu: goto label_1aea1c;
        case 0x1aea20u: goto label_1aea20;
        case 0x1aea24u: goto label_1aea24;
        case 0x1aea28u: goto label_1aea28;
        case 0x1aea2cu: goto label_1aea2c;
        case 0x1aea30u: goto label_1aea30;
        case 0x1aea34u: goto label_1aea34;
        case 0x1aea38u: goto label_1aea38;
        case 0x1aea3cu: goto label_1aea3c;
        case 0x1aea40u: goto label_1aea40;
        case 0x1aea44u: goto label_1aea44;
        case 0x1aea48u: goto label_1aea48;
        case 0x1aea4cu: goto label_1aea4c;
        case 0x1aea50u: goto label_1aea50;
        case 0x1aea54u: goto label_1aea54;
        case 0x1aea58u: goto label_1aea58;
        case 0x1aea5cu: goto label_1aea5c;
        case 0x1aea60u: goto label_1aea60;
        case 0x1aea64u: goto label_1aea64;
        case 0x1aea68u: goto label_1aea68;
        case 0x1aea6cu: goto label_1aea6c;
        case 0x1aea70u: goto label_1aea70;
        case 0x1aea74u: goto label_1aea74;
        case 0x1aea78u: goto label_1aea78;
        case 0x1aea7cu: goto label_1aea7c;
        case 0x1aea80u: goto label_1aea80;
        case 0x1aea84u: goto label_1aea84;
        case 0x1aea88u: goto label_1aea88;
        case 0x1aea8cu: goto label_1aea8c;
        case 0x1aea90u: goto label_1aea90;
        case 0x1aea94u: goto label_1aea94;
        case 0x1aea98u: goto label_1aea98;
        case 0x1aea9cu: goto label_1aea9c;
        case 0x1aeaa0u: goto label_1aeaa0;
        case 0x1aeaa4u: goto label_1aeaa4;
        case 0x1aeaa8u: goto label_1aeaa8;
        case 0x1aeaacu: goto label_1aeaac;
        case 0x1aeab0u: goto label_1aeab0;
        case 0x1aeab4u: goto label_1aeab4;
        case 0x1aeab8u: goto label_1aeab8;
        case 0x1aeabcu: goto label_1aeabc;
        case 0x1aeac0u: goto label_1aeac0;
        case 0x1aeac4u: goto label_1aeac4;
        case 0x1aeac8u: goto label_1aeac8;
        case 0x1aeaccu: goto label_1aeacc;
        case 0x1aead0u: goto label_1aead0;
        case 0x1aead4u: goto label_1aead4;
        case 0x1aead8u: goto label_1aead8;
        case 0x1aeadcu: goto label_1aeadc;
        case 0x1aeae0u: goto label_1aeae0;
        case 0x1aeae4u: goto label_1aeae4;
        case 0x1aeae8u: goto label_1aeae8;
        case 0x1aeaecu: goto label_1aeaec;
        case 0x1aeaf0u: goto label_1aeaf0;
        case 0x1aeaf4u: goto label_1aeaf4;
        case 0x1aeaf8u: goto label_1aeaf8;
        case 0x1aeafcu: goto label_1aeafc;
        case 0x1aeb00u: goto label_1aeb00;
        case 0x1aeb04u: goto label_1aeb04;
        case 0x1aeb08u: goto label_1aeb08;
        case 0x1aeb0cu: goto label_1aeb0c;
        case 0x1aeb10u: goto label_1aeb10;
        case 0x1aeb14u: goto label_1aeb14;
        case 0x1aeb18u: goto label_1aeb18;
        case 0x1aeb1cu: goto label_1aeb1c;
        case 0x1aeb20u: goto label_1aeb20;
        case 0x1aeb24u: goto label_1aeb24;
        case 0x1aeb28u: goto label_1aeb28;
        case 0x1aeb2cu: goto label_1aeb2c;
        case 0x1aeb30u: goto label_1aeb30;
        case 0x1aeb34u: goto label_1aeb34;
        case 0x1aeb38u: goto label_1aeb38;
        case 0x1aeb3cu: goto label_1aeb3c;
        case 0x1aeb40u: goto label_1aeb40;
        case 0x1aeb44u: goto label_1aeb44;
        case 0x1aeb48u: goto label_1aeb48;
        case 0x1aeb4cu: goto label_1aeb4c;
        case 0x1aeb50u: goto label_1aeb50;
        case 0x1aeb54u: goto label_1aeb54;
        case 0x1aeb58u: goto label_1aeb58;
        case 0x1aeb5cu: goto label_1aeb5c;
        case 0x1aeb60u: goto label_1aeb60;
        case 0x1aeb64u: goto label_1aeb64;
        case 0x1aeb68u: goto label_1aeb68;
        case 0x1aeb6cu: goto label_1aeb6c;
        case 0x1aeb70u: goto label_1aeb70;
        case 0x1aeb74u: goto label_1aeb74;
        case 0x1aeb78u: goto label_1aeb78;
        case 0x1aeb7cu: goto label_1aeb7c;
        case 0x1aeb80u: goto label_1aeb80;
        case 0x1aeb84u: goto label_1aeb84;
        case 0x1aeb88u: goto label_1aeb88;
        case 0x1aeb8cu: goto label_1aeb8c;
        case 0x1aeb90u: goto label_1aeb90;
        case 0x1aeb94u: goto label_1aeb94;
        case 0x1aeb98u: goto label_1aeb98;
        case 0x1aeb9cu: goto label_1aeb9c;
        case 0x1aeba0u: goto label_1aeba0;
        case 0x1aeba4u: goto label_1aeba4;
        case 0x1aeba8u: goto label_1aeba8;
        case 0x1aebacu: goto label_1aebac;
        case 0x1aebb0u: goto label_1aebb0;
        case 0x1aebb4u: goto label_1aebb4;
        case 0x1aebb8u: goto label_1aebb8;
        case 0x1aebbcu: goto label_1aebbc;
        case 0x1aebc0u: goto label_1aebc0;
        case 0x1aebc4u: goto label_1aebc4;
        case 0x1aebc8u: goto label_1aebc8;
        case 0x1aebccu: goto label_1aebcc;
        default: break;
    }

    ctx->pc = 0x1ae8a0u;

label_1ae8a0:
    // 0x1ae8a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ae8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1ae8a4:
    // 0x1ae8a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ae8a8:
    // 0x1ae8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ae8ac:
    // 0x1ae8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ae8b0:
    // 0x1ae8b0: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1ae8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_1ae8b4:
    // 0x1ae8b4: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x1ae8b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ae8b8:
    // 0x1ae8b8: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1ae8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_1ae8bc:
    // 0x1ae8bc: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1ae8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_1ae8c0:
    // 0x1ae8c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ae8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae8c4:
    // 0x1ae8c4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ae8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae8c8:
    // 0x1ae8c8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1ae8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1ae8cc:
    // 0x1ae8cc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_1ae8d0:
    if (ctx->pc == 0x1AE8D0u) {
        ctx->pc = 0x1AE8D4u;
        goto label_1ae8d4;
    }
    ctx->pc = 0x1AE8CCu;
    {
        const bool branch_taken_0x1ae8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae8cc) {
            ctx->pc = 0x1AE988u;
            goto label_1ae988;
        }
    }
    ctx->pc = 0x1AE8D4u;
label_1ae8d4:
    // 0x1ae8d4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ae8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae8d8:
    // 0x1ae8d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1ae8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1ae8dc:
    // 0x1ae8dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae8e0:
    // 0x1ae8e0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1ae8e4:
    if (ctx->pc == 0x1AE8E4u) {
        ctx->pc = 0x1AE8E8u;
        goto label_1ae8e8;
    }
    ctx->pc = 0x1AE8E0u;
    {
        const bool branch_taken_0x1ae8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae8e0) {
            ctx->pc = 0x1AE930u;
            goto label_1ae930;
        }
    }
    ctx->pc = 0x1AE8E8u;
label_1ae8e8:
    // 0x1ae8e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ae8ec:
    // 0x1ae8ec: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1ae8f0:
    if (ctx->pc == 0x1AE8F0u) {
        ctx->pc = 0x1AE8F4u;
        goto label_1ae8f4;
    }
    ctx->pc = 0x1AE8ECu;
    {
        const bool branch_taken_0x1ae8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae8ec) {
            ctx->pc = 0x1AE91Cu;
            goto label_1ae91c;
        }
    }
    ctx->pc = 0x1AE8F4u;
label_1ae8f4:
    // 0x1ae8f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ae8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae8f8:
    // 0x1ae8f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1ae8fc:
    if (ctx->pc == 0x1AE8FCu) {
        ctx->pc = 0x1AE900u;
        goto label_1ae900;
    }
    ctx->pc = 0x1AE8F8u;
    {
        const bool branch_taken_0x1ae8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae8f8) {
            ctx->pc = 0x1AE908u;
            goto label_1ae908;
        }
    }
    ctx->pc = 0x1AE900u;
label_1ae900:
    // 0x1ae900: 0x1000000e  b           . + 4 + (0xE << 2)
label_1ae904:
    if (ctx->pc == 0x1AE904u) {
        ctx->pc = 0x1AE908u;
        goto label_1ae908;
    }
    ctx->pc = 0x1AE900u;
    {
        const bool branch_taken_0x1ae900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae900) {
            ctx->pc = 0x1AE93Cu;
            goto label_1ae93c;
        }
    }
    ctx->pc = 0x1AE908u;
label_1ae908:
    // 0x1ae908: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae90c:
    // 0x1ae90c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ae90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae910:
    // 0x1ae910: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1ae910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1ae914:
    // 0x1ae914: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ae918:
    if (ctx->pc == 0x1AE918u) {
        ctx->pc = 0x1AE91Cu;
        goto label_1ae91c;
    }
    ctx->pc = 0x1AE914u;
    {
        const bool branch_taken_0x1ae914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae914) {
            ctx->pc = 0x1AE93Cu;
            goto label_1ae93c;
        }
    }
    ctx->pc = 0x1AE91Cu;
label_1ae91c:
    // 0x1ae91c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ae91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ae920:
    // 0x1ae920: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ae920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae924:
    // 0x1ae924: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1ae924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1ae928:
    // 0x1ae928: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ae92c:
    if (ctx->pc == 0x1AE92Cu) {
        ctx->pc = 0x1AE930u;
        goto label_1ae930;
    }
    ctx->pc = 0x1AE928u;
    {
        const bool branch_taken_0x1ae928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae928) {
            ctx->pc = 0x1AE93Cu;
            goto label_1ae93c;
        }
    }
    ctx->pc = 0x1AE930u;
label_1ae930:
    // 0x1ae930: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ae930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ae934:
    // 0x1ae934: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ae934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae938:
    // 0x1ae938: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1ae938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1ae93c:
    // 0x1ae93c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ae93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ae940:
    // 0x1ae940: 0xc09ac08  jal         func_26B020
label_1ae944:
    if (ctx->pc == 0x1AE944u) {
        ctx->pc = 0x1AE948u;
        goto label_1ae948;
    }
    ctx->pc = 0x1AE940u;
    SET_GPR_U32(ctx, 31, 0x1AE948u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1AE940u, 0x1AE948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE948u;
label_1ae948:
    // 0x1ae948: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ae948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae94c:
    // 0x1ae94c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1ae94cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ae950:
    // 0x1ae950: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ae950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1ae954:
    // 0x1ae954: 0xc068170  jal         func_1A05C0
label_1ae958:
    if (ctx->pc == 0x1AE958u) {
        ctx->pc = 0x1AE95Cu;
        goto label_1ae95c;
    }
    ctx->pc = 0x1AE954u;
    SET_GPR_U32(ctx, 31, 0x1AE95Cu);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1AE954u, 0x1AE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE95Cu;
label_1ae95c:
    // 0x1ae95c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ae95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ae960:
    // 0x1ae960: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1ae960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_1ae964:
    // 0x1ae964: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ae964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae968:
    // 0x1ae968: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ae968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ae96c:
    // 0x1ae96c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ae96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ae970:
    // 0x1ae970: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae974:
    // 0x1ae974: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ae974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae978:
    // 0x1ae978: 0xc0af03c  jal         func_2BC0F0
label_1ae97c:
    if (ctx->pc == 0x1AE97Cu) {
        ctx->pc = 0x1AE980u;
        goto label_1ae980;
    }
    ctx->pc = 0x1AE978u;
    SET_GPR_U32(ctx, 31, 0x1AE980u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1AE978u, 0x1AE980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE980u;
label_1ae980:
    // 0x1ae980: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ae980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae984:
    // 0x1ae984: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1ae984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1ae988:
    // 0x1ae988: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ae988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae98c:
    // 0x1ae98c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ae98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ae990:
    // 0x1ae990: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ae990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ae994:
    // 0x1ae994: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_1ae998:
    if (ctx->pc == 0x1AE998u) {
        ctx->pc = 0x1AE99Cu;
        goto label_1ae99c;
    }
    ctx->pc = 0x1AE994u;
    {
        const bool branch_taken_0x1ae994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ae994) {
            ctx->pc = 0x1AEA04u;
            goto label_1aea04;
        }
    }
    ctx->pc = 0x1AE99Cu;
label_1ae99c:
    // 0x1ae99c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ae99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1ae9a0:
    // 0x1ae9a0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ae9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ae9a4:
    // 0x1ae9a4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1ae9a8:
    if (ctx->pc == 0x1AE9A8u) {
        ctx->pc = 0x1AE9ACu;
        goto label_1ae9ac;
    }
    ctx->pc = 0x1AE9A4u;
    {
        const bool branch_taken_0x1ae9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae9a4) {
            ctx->pc = 0x1AEA04u;
            goto label_1aea04;
        }
    }
    ctx->pc = 0x1AE9ACu;
label_1ae9ac:
    // 0x1ae9ac: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1ae9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1ae9b0:
    // 0x1ae9b0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1ae9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae9b4:
    // 0x1ae9b4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ae9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae9b8:
    // 0x1ae9b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ae9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae9bc:
    // 0x1ae9bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ae9bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ae9c0:
    // 0x1ae9c0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ae9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae9c4:
    // 0x1ae9c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ae9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1ae9c8:
    // 0x1ae9c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ae9cc:
    if (ctx->pc == 0x1AE9CCu) {
        ctx->pc = 0x1AE9D0u;
        goto label_1ae9d0;
    }
    ctx->pc = 0x1AE9C8u;
    {
        const bool branch_taken_0x1ae9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae9c8) {
            ctx->pc = 0x1AE9ECu;
            goto label_1ae9ec;
        }
    }
    ctx->pc = 0x1AE9D0u;
label_1ae9d0:
    // 0x1ae9d0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ae9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae9d4:
    // 0x1ae9d4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ae9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae9d8:
    // 0x1ae9d8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1ae9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae9dc:
    // 0x1ae9dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ae9dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ae9e0:
    // 0x1ae9e0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ae9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae9e4:
    // 0x1ae9e4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ae9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1ae9e8:
    // 0x1ae9e8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1ae9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ae9ec:
    // 0x1ae9ec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ae9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae9f0:
    // 0x1ae9f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ae9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae9f4:
    // 0x1ae9f4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1ae9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae9f8:
    // 0x1ae9f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ae9f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ae9fc:
    // 0x1ae9fc: 0x4500fff4  bc1f        . + 4 + (-0xC << 2)
label_1aea00:
    if (ctx->pc == 0x1AEA00u) {
        ctx->pc = 0x1AEA04u;
        goto label_1aea04;
    }
    ctx->pc = 0x1AE9FCu;
    {
        const bool branch_taken_0x1ae9fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ae9fc) {
            ctx->pc = 0x1AE9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae9d0;
        }
    }
    ctx->pc = 0x1AEA04u;
label_1aea04:
    // 0x1aea04: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1aea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1aea08:
    // 0x1aea08: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1aea08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1aea0c:
    // 0x1aea0c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1aea0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1aea10:
    // 0x1aea10: 0xc085538  jal         func_2154E0
label_1aea14:
    if (ctx->pc == 0x1AEA14u) {
        ctx->pc = 0x1AEA18u;
        goto label_1aea18;
    }
    ctx->pc = 0x1AEA10u;
    SET_GPR_U32(ctx, 31, 0x1AEA18u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1AEA10u, 0x1AEA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA18u;
label_1aea18:
    // 0x1aea18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aea18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aea1c:
    // 0x1aea1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aea1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aea20:
    // 0x1aea20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1aea20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aea24:
    // 0x1aea24: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1aea24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1aea28:
    // 0x1aea28: 0x320f809  jalr        $t9
label_1aea2c:
    if (ctx->pc == 0x1AEA2Cu) {
        ctx->pc = 0x1AEA30u;
        goto label_1aea30;
    }
    ctx->pc = 0x1AEA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEA30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEA28u, 0x1AEA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEA30u;
label_1aea30:
    // 0x1aea30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aea30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aea34:
    // 0x1aea34: 0xc063dd0  jal         func_18F740
label_1aea38:
    if (ctx->pc == 0x1AEA38u) {
        ctx->pc = 0x1AEA3Cu;
        goto label_1aea3c;
    }
    ctx->pc = 0x1AEA34u;
    SET_GPR_U32(ctx, 31, 0x1AEA3Cu);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1AEA34u, 0x1AEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA3Cu;
label_1aea3c:
    // 0x1aea3c: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_1aea40:
    if (ctx->pc == 0x1AEA40u) {
        ctx->pc = 0x1AEA44u;
        goto label_1aea44;
    }
    ctx->pc = 0x1AEA3Cu;
    {
        const bool branch_taken_0x1aea3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aea3c) {
            ctx->pc = 0x1AEBACu;
            goto label_1aebac;
        }
    }
    ctx->pc = 0x1AEA44u;
label_1aea44:
    // 0x1aea44: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1aea44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1aea48:
    // 0x1aea48: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1aea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1aea4c:
    // 0x1aea4c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1aea50:
    if (ctx->pc == 0x1AEA50u) {
        ctx->pc = 0x1AEA54u;
        goto label_1aea54;
    }
    ctx->pc = 0x1AEA4Cu;
    {
        const bool branch_taken_0x1aea4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aea4c) {
            ctx->pc = 0x1AEA74u;
            goto label_1aea74;
        }
    }
    ctx->pc = 0x1AEA54u;
label_1aea54:
    // 0x1aea54: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1aea54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1aea58:
    // 0x1aea58: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1aea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1aea5c:
    // 0x1aea5c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1aea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1aea60:
    // 0x1aea60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aea60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aea64:
    // 0x1aea64: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1aea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1aea68:
    // 0x1aea68: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1aea68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1aea6c:
    // 0x1aea6c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1aea70:
    if (ctx->pc == 0x1AEA70u) {
        ctx->pc = 0x1AEA74u;
        goto label_1aea74;
    }
    ctx->pc = 0x1AEA6Cu;
    {
        const bool branch_taken_0x1aea6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea6c) {
            ctx->pc = 0x1AEB68u;
            goto label_1aeb68;
        }
    }
    ctx->pc = 0x1AEA74u;
label_1aea74:
    // 0x1aea74: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1aea74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1aea78:
    // 0x1aea78: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1aea78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1aea7c:
    // 0x1aea7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aea80:
    // 0x1aea80: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1aea84:
    if (ctx->pc == 0x1AEA84u) {
        ctx->pc = 0x1AEA88u;
        goto label_1aea88;
    }
    ctx->pc = 0x1AEA80u;
    {
        const bool branch_taken_0x1aea80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aea80) {
            ctx->pc = 0x1AEA9Cu;
            goto label_1aea9c;
        }
    }
    ctx->pc = 0x1AEA88u;
label_1aea88:
    // 0x1aea88: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1aea88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1aea8c:
    // 0x1aea8c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1aea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1aea90:
    // 0x1aea90: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1aea90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1aea94:
    // 0x1aea94: 0x10000034  b           . + 4 + (0x34 << 2)
label_1aea98:
    if (ctx->pc == 0x1AEA98u) {
        ctx->pc = 0x1AEA9Cu;
        goto label_1aea9c;
    }
    ctx->pc = 0x1AEA94u;
    {
        const bool branch_taken_0x1aea94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea94) {
            ctx->pc = 0x1AEB68u;
            goto label_1aeb68;
        }
    }
    ctx->pc = 0x1AEA9Cu;
label_1aea9c:
    // 0x1aea9c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1aea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1aeaa0:
    // 0x1aeaa0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1aeaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1aeaa4:
    // 0x1aeaa4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1aeaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1aeaa8:
    // 0x1aeaa8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1aeaac:
    if (ctx->pc == 0x1AEAACu) {
        ctx->pc = 0x1AEAB0u;
        goto label_1aeab0;
    }
    ctx->pc = 0x1AEAA8u;
    {
        const bool branch_taken_0x1aeaa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aeaa8) {
            ctx->pc = 0x1AEAC4u;
            goto label_1aeac4;
        }
    }
    ctx->pc = 0x1AEAB0u;
label_1aeab0:
    // 0x1aeab0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1aeab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1aeab4:
    // 0x1aeab4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1aeab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1aeab8:
    // 0x1aeab8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1aeab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1aeabc:
    // 0x1aeabc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1aeac0:
    if (ctx->pc == 0x1AEAC0u) {
        ctx->pc = 0x1AEAC4u;
        goto label_1aeac4;
    }
    ctx->pc = 0x1AEABCu;
    {
        const bool branch_taken_0x1aeabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeabc) {
            ctx->pc = 0x1AEB68u;
            goto label_1aeb68;
        }
    }
    ctx->pc = 0x1AEAC4u;
label_1aeac4:
    // 0x1aeac4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1aeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1aeac8:
    // 0x1aeac8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1aeac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1aeacc:
    // 0x1aeacc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aeaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aead0:
    // 0x1aead0: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_1aead4:
    if (ctx->pc == 0x1AEAD4u) {
        ctx->pc = 0x1AEAD8u;
        goto label_1aead8;
    }
    ctx->pc = 0x1AEAD0u;
    {
        const bool branch_taken_0x1aead0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aead0) {
            ctx->pc = 0x1AEB5Cu;
            goto label_1aeb5c;
        }
    }
    ctx->pc = 0x1AEAD8u;
label_1aead8:
    // 0x1aead8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1aead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1aeadc:
    // 0x1aeadc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1aeadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1aeae0:
    // 0x1aeae0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1aeae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1aeae4:
    // 0x1aeae4: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_1aeae8:
    if (ctx->pc == 0x1AEAE8u) {
        ctx->pc = 0x1AEAECu;
        goto label_1aeaec;
    }
    ctx->pc = 0x1AEAE4u;
    {
        const bool branch_taken_0x1aeae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aeae4) {
            ctx->pc = 0x1AEB44u;
            goto label_1aeb44;
        }
    }
    ctx->pc = 0x1AEAECu;
label_1aeaec:
    // 0x1aeaec: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1aeaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1aeaf0:
    // 0x1aeaf0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1aeaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1aeaf4:
    // 0x1aeaf4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1aeaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1aeaf8:
    // 0x1aeaf8: 0xc09ac08  jal         func_26B020
label_1aeafc:
    if (ctx->pc == 0x1AEAFCu) {
        ctx->pc = 0x1AEB00u;
        goto label_1aeb00;
    }
    ctx->pc = 0x1AEAF8u;
    SET_GPR_U32(ctx, 31, 0x1AEB00u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1AEAF8u, 0x1AEB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB00u;
label_1aeb00:
    // 0x1aeb00: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1aeb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1aeb04:
    // 0x1aeb04: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1aeb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1aeb08:
    // 0x1aeb08: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1aeb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1aeb0c:
    // 0x1aeb0c: 0xc068170  jal         func_1A05C0
label_1aeb10:
    if (ctx->pc == 0x1AEB10u) {
        ctx->pc = 0x1AEB14u;
        goto label_1aeb14;
    }
    ctx->pc = 0x1AEB0Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB14u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1AEB0Cu, 0x1AEB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB14u;
label_1aeb14:
    // 0x1aeb14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aeb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aeb18:
    // 0x1aeb18: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1aeb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_1aeb1c:
    // 0x1aeb1c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1aeb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1aeb20:
    // 0x1aeb20: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1aeb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1aeb24:
    // 0x1aeb24: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1aeb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1aeb28:
    // 0x1aeb28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1aeb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aeb2c:
    // 0x1aeb2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aeb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aeb30:
    // 0x1aeb30: 0xc0af03c  jal         func_2BC0F0
label_1aeb34:
    if (ctx->pc == 0x1AEB34u) {
        ctx->pc = 0x1AEB38u;
        goto label_1aeb38;
    }
    ctx->pc = 0x1AEB30u;
    SET_GPR_U32(ctx, 31, 0x1AEB38u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1AEB30u, 0x1AEB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB38u;
label_1aeb38:
    // 0x1aeb38: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1aeb38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aeb3c:
    // 0x1aeb3c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1aeb40:
    if (ctx->pc == 0x1AEB40u) {
        ctx->pc = 0x1AEB44u;
        goto label_1aeb44;
    }
    ctx->pc = 0x1AEB3Cu;
    {
        const bool branch_taken_0x1aeb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeb3c) {
            ctx->pc = 0x1AEB48u;
            goto label_1aeb48;
        }
    }
    ctx->pc = 0x1AEB44u;
label_1aeb44:
    // 0x1aeb44: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1aeb44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aeb48:
    // 0x1aeb48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aeb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aeb4c:
    // 0x1aeb4c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1aeb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1aeb50:
    // 0x1aeb50: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1aeb50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1aeb54:
    // 0x1aeb54: 0x10000004  b           . + 4 + (0x4 << 2)
label_1aeb58:
    if (ctx->pc == 0x1AEB58u) {
        ctx->pc = 0x1AEB5Cu;
        goto label_1aeb5c;
    }
    ctx->pc = 0x1AEB54u;
    {
        const bool branch_taken_0x1aeb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeb54) {
            ctx->pc = 0x1AEB68u;
            goto label_1aeb68;
        }
    }
    ctx->pc = 0x1AEB5Cu;
label_1aeb5c:
    // 0x1aeb5c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1aeb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1aeb60:
    // 0x1aeb60: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1aeb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1aeb64:
    // 0x1aeb64: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1aeb64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1aeb68:
    // 0x1aeb68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1aeb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aeb6c:
    // 0x1aeb6c: 0xc09ac08  jal         func_26B020
label_1aeb70:
    if (ctx->pc == 0x1AEB70u) {
        ctx->pc = 0x1AEB74u;
        goto label_1aeb74;
    }
    ctx->pc = 0x1AEB6Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB74u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1AEB6Cu, 0x1AEB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB74u;
label_1aeb74:
    // 0x1aeb74: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1aeb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1aeb78:
    // 0x1aeb78: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1aeb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1aeb7c:
    // 0x1aeb7c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1aeb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1aeb80:
    // 0x1aeb80: 0xc068170  jal         func_1A05C0
label_1aeb84:
    if (ctx->pc == 0x1AEB84u) {
        ctx->pc = 0x1AEB88u;
        goto label_1aeb88;
    }
    ctx->pc = 0x1AEB80u;
    SET_GPR_U32(ctx, 31, 0x1AEB88u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1AEB80u, 0x1AEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB88u;
label_1aeb88:
    // 0x1aeb88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aeb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aeb8c:
    // 0x1aeb8c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1aeb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_1aeb90:
    // 0x1aeb90: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1aeb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1aeb94:
    // 0x1aeb94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1aeb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1aeb98:
    // 0x1aeb98: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1aeb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aeb9c:
    // 0x1aeb9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1aeb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aeba0:
    // 0x1aeba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aeba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aeba4:
    // 0x1aeba4: 0xc0af03c  jal         func_2BC0F0
label_1aeba8:
    if (ctx->pc == 0x1AEBA8u) {
        ctx->pc = 0x1AEBACu;
        goto label_1aebac;
    }
    ctx->pc = 0x1AEBA4u;
    SET_GPR_U32(ctx, 31, 0x1AEBACu);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1AEBA4u, 0x1AEBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBACu;
label_1aebac:
    // 0x1aebac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1aebacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aebb0:
    // 0x1aebb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aebb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aebb4:
    // 0x1aebb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aebb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aebb8:
    // 0x1aebb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aebb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1aebbc:
    // 0x1aebbc: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1aebbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1aebc0:
    // 0x1aebc0: 0x3e00008  jr          $ra
label_1aebc4:
    if (ctx->pc == 0x1AEBC4u) {
        ctx->pc = 0x1AEBC8u;
        goto label_1aebc8;
    }
    ctx->pc = 0x1AEBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEBC8u;
label_1aebc8:
    // 0x1aebc8: 0x0  nop
    ctx->pc = 0x1aebc8u;
    // NOP
label_1aebcc:
    // 0x1aebcc: 0x0  nop
    ctx->pc = 0x1aebccu;
    // NOP
    ctx->pc = 0x1aebd0u;
}
